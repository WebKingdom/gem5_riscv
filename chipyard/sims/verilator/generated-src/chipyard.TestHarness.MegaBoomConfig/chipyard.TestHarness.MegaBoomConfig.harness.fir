circuit TestHarness :
  extmodule plusarg_reader :
    output out : UInt<32>
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  module Queue_4_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_size : UInt<4>
    input io_enq_bits_address : UInt<32>
    input io_enq_bits_mask : UInt<8>
    input io_enq_bits_data : UInt<64>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<3>
    output io_deq_bits_size : UInt<4>
    output io_deq_bits_source : UInt<1>
    output io_deq_bits_address : UInt<32>
    output io_deq_bits_mask : UInt<8>
    output io_deq_bits_data : UInt<64>
    output io_deq_bits_corrupt : UInt<1>

    mem ram_opcode : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_param : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_size : @[Decoupled.scala 259:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_source : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_address : @[Decoupled.scala 259:95]
      data-type => UInt<32>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_mask : @[Decoupled.scala 259:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_data : @[Decoupled.scala 259:95]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_corrupt : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 62:40]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
    node _empty_T = not(maybe_full) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    node _GEN_12 = mux(do_enq, _value_T_1, value) @[Decoupled.scala 272:16 Counter.scala 78:15 62:40]
    node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_13 = mux(do_deq, _value_T_3, value_1) @[Decoupled.scala 276:16 Counter.scala 78:15 62:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    node _GEN_14 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 279:27 280:16 262:27]
    io_enq_ready <= not(full) @[Decoupled.scala 289:19]
    io_deq_valid <= not(empty) @[Decoupled.scala 288:19]
    io_deq_bits_opcode <= ram_opcode.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_param <= ram_param.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_size <= ram_size.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_source <= ram_source.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_address <= ram_address.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_mask <= ram_mask.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_data <= ram_data.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_corrupt <= ram_corrupt.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    ram_opcode.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_opcode.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_address.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_mask.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_param.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_size.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_source.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_address.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_mask.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_data.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_corrupt.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_opcode.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_address.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_mask.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.data <= io_enq_bits_opcode @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.data <= UInt<3>("h0") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.data <= io_enq_bits_size @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.data <= UInt<1>("h0") @[Decoupled.scala 272:16 273:24]
    ram_address.MPORT.data <= io_enq_bits_address @[Decoupled.scala 272:16 273:24]
    ram_mask.MPORT.data <= io_enq_bits_mask @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.data <= io_enq_bits_data @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.data <= UInt<1>("h0") @[Decoupled.scala 272:16 273:24]
    ram_opcode.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_address.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_mask.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    value <= mux(reset, UInt<1>("h0"), _GEN_12) @[Counter.scala 62:{40,40}]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Counter.scala 62:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_14) @[Decoupled.scala 262:{27,27}]

  module Queue_5_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_param : UInt<2>
    input io_enq_bits_size : UInt<4>
    input io_enq_bits_source : UInt<1>
    input io_enq_bits_sink : UInt<4>
    input io_enq_bits_denied : UInt<1>
    input io_enq_bits_data : UInt<64>
    input io_enq_bits_corrupt : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<2>
    output io_deq_bits_size : UInt<4>
    output io_deq_bits_source : UInt<1>
    output io_deq_bits_sink : UInt<4>
    output io_deq_bits_denied : UInt<1>
    output io_deq_bits_data : UInt<64>
    output io_deq_bits_corrupt : UInt<1>

    mem ram_opcode : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_param : @[Decoupled.scala 259:95]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_size : @[Decoupled.scala 259:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_source : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_sink : @[Decoupled.scala 259:95]
      data-type => UInt<4>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_denied : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_data : @[Decoupled.scala 259:95]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_corrupt : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 62:40]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
    node _empty_T = not(maybe_full) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    node _GEN_12 = mux(do_enq, _value_T_1, value) @[Decoupled.scala 272:16 Counter.scala 78:15 62:40]
    node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_13 = mux(do_deq, _value_T_3, value_1) @[Decoupled.scala 276:16 Counter.scala 78:15 62:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    node _GEN_14 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 279:27 280:16 262:27]
    io_enq_ready <= not(full) @[Decoupled.scala 289:19]
    io_deq_valid <= not(empty) @[Decoupled.scala 288:19]
    io_deq_bits_opcode <= ram_opcode.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_param <= ram_param.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_size <= ram_size.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_source <= ram_source.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_sink <= ram_sink.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_denied <= ram_denied.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_data <= ram_data.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_corrupt <= ram_corrupt.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    ram_opcode.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_opcode.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_sink.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_denied.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_param.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_size.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_source.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_sink.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_denied.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_data.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_corrupt.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_opcode.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_sink.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_denied.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.data <= io_enq_bits_opcode @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.data <= io_enq_bits_param @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.data <= io_enq_bits_size @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.data <= io_enq_bits_source @[Decoupled.scala 272:16 273:24]
    ram_sink.MPORT.data <= io_enq_bits_sink @[Decoupled.scala 272:16 273:24]
    ram_denied.MPORT.data <= io_enq_bits_denied @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.data <= io_enq_bits_data @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.data <= io_enq_bits_corrupt @[Decoupled.scala 272:16 273:24]
    ram_opcode.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_sink.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_denied.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    value <= mux(reset, UInt<1>("h0"), _GEN_12) @[Counter.scala 62:{40,40}]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Counter.scala 62:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_14) @[Decoupled.scala 262:{27,27}]

  module AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness :
    input clock : Clock
    input reset : AsyncReset
    input io_d : UInt<1>
    output io_q : UInt<1>

    reg sync_0 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[SynchronizerReg.scala 51:87]
    reg sync_1 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[SynchronizerReg.scala 51:87]
    reg sync_2 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[SynchronizerReg.scala 51:87]
    io_q <= sync_0 @[SynchronizerReg.scala 59:8]
    sync_0 <= sync_1 @[SynchronizerReg.scala 51:{87,87} 57:10]
    sync_1 <= sync_2 @[SynchronizerReg.scala 51:{87,87} 57:10]
    sync_2 <= io_d @[SynchronizerReg.scala 54:22]

  module AsyncResetSynchronizerShiftReg_w1_d3_i0_1_inTestHarness :
    input clock : Clock
    input reset : AsyncReset
    input io_d : UInt<1>
    output io_q : UInt<1>

    inst output_chain of AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    io_q <= output_chain.io_q @[ShiftReg.scala 48:{24,24}]
    output_chain.clock <= clock
    output_chain.reset <= reset @[SynchronizerReg.scala 86:21]
    output_chain.io_d <= io_d @[SynchronizerReg.scala 87:41]

  module AsyncValidSync_inTestHarness :
    input io_in : UInt<1>
    output io_out : UInt<1>
    input clock : Clock
    input reset : AsyncReset

    inst io_out_source_valid_0 of AsyncResetSynchronizerShiftReg_w1_d3_i0_1_inTestHarness @[ShiftReg.scala 45:23]
    io_out <= io_out_source_valid_0.io_q @[ShiftReg.scala 48:{24,24}]
    io_out_source_valid_0.clock <= clock
    io_out_source_valid_0.reset <= reset
    io_out_source_valid_0.io_d <= io_in @[ShiftReg.scala 47:16]

  module HellaPeekingArbiter_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_in_1_ready : UInt<1>
    input io_in_1_valid : UInt<1>
    input io_in_1_bits_opcode : UInt<3>
    input io_in_1_bits_param : UInt<3>
    input io_in_1_bits_size : UInt<4>
    input io_in_1_bits_source : UInt<4>
    input io_in_1_bits_data : UInt<64>
    input io_in_1_bits_corrupt : UInt<1>
    input io_in_1_bits_union : UInt<8>
    input io_in_1_bits_last : UInt<1>
    output io_in_4_ready : UInt<1>
    input io_in_4_valid : UInt<1>
    input io_in_4_bits_opcode : UInt<3>
    input io_in_4_bits_param : UInt<3>
    input io_in_4_bits_size : UInt<4>
    input io_in_4_bits_source : UInt<4>
    input io_in_4_bits_address : UInt<32>
    input io_in_4_bits_data : UInt<64>
    input io_in_4_bits_corrupt : UInt<1>
    input io_in_4_bits_union : UInt<8>
    input io_in_4_bits_last : UInt<1>
    input io_out_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_out_bits_chanId : UInt<3>
    output io_out_bits_opcode : UInt<3>
    output io_out_bits_param : UInt<3>
    output io_out_bits_size : UInt<4>
    output io_out_bits_source : UInt<4>
    output io_out_bits_address : UInt<32>
    output io_out_bits_data : UInt<64>
    output io_out_bits_corrupt : UInt<1>
    output io_out_bits_union : UInt<8>
    output io_out_bits_last : UInt<1>

    reg lockIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), lockIdx) @[Arbiters.scala 25:20]
    reg locked : UInt<1>, clock with :
      reset => (UInt<1>("h0"), locked) @[Arbiters.scala 26:19]
    node choice = mux(io_in_1_valid, UInt<3>("h1"), UInt<3>("h4")) @[Mux.scala 47:70]
    node chosen = mux(locked, lockIdx, choice) @[Arbiters.scala 36:19]
    node _io_in_1_ready_T = eq(chosen, UInt<3>("h1")) @[Arbiters.scala 39:46]
    node _io_in_4_ready_T = eq(chosen, UInt<3>("h4")) @[Arbiters.scala 39:46]
    node _GEN_60 = eq(UInt<3>("h1"), chosen) @[Arbiters.scala 42:{16,16}]
    node _GEN_1 = and(_GEN_60, io_in_1_valid) @[Arbiters.scala 42:{16,16}]
    node _GEN_2 = mux(eq(UInt<3>("h2"), chosen), UInt<1>("h0"), _GEN_1) @[Arbiters.scala 42:{16,16}]
    node _GEN_3 = mux(eq(UInt<3>("h3"), chosen), UInt<1>("h0"), _GEN_2) @[Arbiters.scala 42:{16,16}]
    node _GEN_6 = mux(eq(UInt<3>("h1"), chosen), UInt<3>("h3"), UInt<3>("h4")) @[Arbiters.scala 43:{15,15}]
    node _GEN_7 = mux(eq(UInt<3>("h2"), chosen), UInt<3>("h2"), _GEN_6) @[Arbiters.scala 43:{15,15}]
    node _GEN_8 = mux(eq(UInt<3>("h3"), chosen), UInt<3>("h1"), _GEN_7) @[Arbiters.scala 43:{15,15}]
    node _GEN_11 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_opcode, UInt<3>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_12 = mux(eq(UInt<3>("h2"), chosen), UInt<3>("h0"), _GEN_11) @[Arbiters.scala 43:{15,15}]
    node _GEN_13 = mux(eq(UInt<3>("h3"), chosen), UInt<3>("h0"), _GEN_12) @[Arbiters.scala 43:{15,15}]
    node _GEN_16 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_param, UInt<3>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_17 = mux(eq(UInt<3>("h2"), chosen), UInt<3>("h0"), _GEN_16) @[Arbiters.scala 43:{15,15}]
    node _GEN_18 = mux(eq(UInt<3>("h3"), chosen), UInt<3>("h0"), _GEN_17) @[Arbiters.scala 43:{15,15}]
    node _GEN_21 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_size, UInt<4>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_22 = mux(eq(UInt<3>("h2"), chosen), UInt<4>("h0"), _GEN_21) @[Arbiters.scala 43:{15,15}]
    node _GEN_23 = mux(eq(UInt<3>("h3"), chosen), UInt<4>("h0"), _GEN_22) @[Arbiters.scala 43:{15,15}]
    node _GEN_26 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_source, UInt<4>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_27 = mux(eq(UInt<3>("h2"), chosen), UInt<4>("h0"), _GEN_26) @[Arbiters.scala 43:{15,15}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), chosen), UInt<4>("h0"), _GEN_27) @[Arbiters.scala 43:{15,15}]
    node _GEN_36 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_data, UInt<64>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_37 = mux(eq(UInt<3>("h2"), chosen), UInt<64>("h0"), _GEN_36) @[Arbiters.scala 43:{15,15}]
    node _GEN_38 = mux(eq(UInt<3>("h3"), chosen), UInt<64>("h0"), _GEN_37) @[Arbiters.scala 43:{15,15}]
    node _GEN_41 = and(_GEN_60, io_in_1_bits_corrupt) @[Arbiters.scala 43:{15,15}]
    node _GEN_42 = mux(eq(UInt<3>("h2"), chosen), UInt<1>("h0"), _GEN_41) @[Arbiters.scala 43:{15,15}]
    node _GEN_43 = mux(eq(UInt<3>("h3"), chosen), UInt<1>("h0"), _GEN_42) @[Arbiters.scala 43:{15,15}]
    node _GEN_46 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_union, UInt<8>("h0")) @[Arbiters.scala 43:{15,15}]
    node _GEN_47 = mux(eq(UInt<3>("h2"), chosen), UInt<8>("h0"), _GEN_46) @[Arbiters.scala 43:{15,15}]
    node _GEN_48 = mux(eq(UInt<3>("h3"), chosen), UInt<8>("h0"), _GEN_47) @[Arbiters.scala 43:{15,15}]
    node _GEN_51 = mux(eq(UInt<3>("h1"), chosen), io_in_1_bits_last, UInt<1>("h1")) @[Arbiters.scala 43:{15,15}]
    node _GEN_62 = eq(UInt<3>("h2"), chosen) @[Arbiters.scala 43:{15,15}]
    node _GEN_52 = or(_GEN_62, _GEN_51) @[Arbiters.scala 43:{15,15}]
    node _GEN_63 = eq(UInt<3>("h3"), chosen) @[Arbiters.scala 43:{15,15}]
    node _GEN_53 = or(_GEN_63, _GEN_52) @[Arbiters.scala 43:{15,15}]
    node _T = and(io_out_ready, io_out_valid) @[Decoupled.scala 50:35]
    node _T_1 = not(locked) @[Arbiters.scala 59:11]
    node _GEN_55 = mux(_T_1, choice, lockIdx) @[Arbiters.scala 59:50 60:15 25:20]
    node _GEN_56 = or(_T_1, locked) @[Arbiters.scala 59:50 61:14 26:19]
    node _GEN_57 = mux(io_out_bits_last, UInt<1>("h0"), _GEN_56) @[Arbiters.scala 64:35 65:14]
    node _GEN_58 = mux(_T, _GEN_55, lockIdx) @[Arbiters.scala 25:20 58:24]
    node _GEN_59 = mux(_T, _GEN_57, locked) @[Arbiters.scala 26:19 58:24]
    io_in_1_ready <= and(io_out_ready, _io_in_1_ready_T) @[Arbiters.scala 39:36]
    io_in_4_ready <= and(io_out_ready, _io_in_4_ready_T) @[Arbiters.scala 39:36]
    io_out_valid <= mux(eq(UInt<3>("h4"), chosen), io_in_4_valid, _GEN_3) @[Arbiters.scala 42:{16,16}]
    io_out_bits_chanId <= mux(eq(UInt<3>("h4"), chosen), UInt<3>("h0"), _GEN_8) @[Arbiters.scala 43:{15,15}]
    io_out_bits_opcode <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_opcode, _GEN_13) @[Arbiters.scala 43:{15,15}]
    io_out_bits_param <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_param, _GEN_18) @[Arbiters.scala 43:{15,15}]
    io_out_bits_size <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_size, _GEN_23) @[Arbiters.scala 43:{15,15}]
    io_out_bits_source <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_source, _GEN_28) @[Arbiters.scala 43:{15,15}]
    io_out_bits_address <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_address, UInt<32>("h0")) @[Arbiters.scala 43:{15,15}]
    io_out_bits_data <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_data, _GEN_38) @[Arbiters.scala 43:{15,15}]
    io_out_bits_corrupt <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_corrupt, _GEN_43) @[Arbiters.scala 43:{15,15}]
    io_out_bits_union <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_union, _GEN_48) @[Arbiters.scala 43:{15,15}]
    io_out_bits_last <= mux(eq(UInt<3>("h4"), chosen), io_in_4_bits_last, _GEN_53) @[Arbiters.scala 43:{15,15}]
    lockIdx <= mux(reset, UInt<3>("h0"), _GEN_58) @[Arbiters.scala 25:{20,20}]
    locked <= mux(reset, UInt<1>("h0"), _GEN_59) @[Arbiters.scala 26:{19,19}]

  module GenericSerializer_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_in_ready : UInt<1>
    input io_in_valid : UInt<1>
    input io_in_bits_chanId : UInt<3>
    input io_in_bits_opcode : UInt<3>
    input io_in_bits_param : UInt<3>
    input io_in_bits_size : UInt<4>
    input io_in_bits_source : UInt<4>
    input io_in_bits_address : UInt<32>
    input io_in_bits_data : UInt<64>
    input io_in_bits_corrupt : UInt<1>
    input io_in_bits_union : UInt<8>
    input io_in_bits_last : UInt<1>
    input io_out_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_out_bits : UInt<32>

    reg data : UInt<123>, clock with :
      reset => (UInt<1>("h0"), data) @[Serdes.scala 173:17]
    reg sending : UInt<1>, clock with :
      reset => (UInt<1>("h0"), sending) @[Serdes.scala 175:24]
    node _T = and(io_out_ready, io_out_valid) @[Decoupled.scala 50:35]
    reg sendCount : UInt<2>, clock with :
      reset => (UInt<1>("h0"), sendCount) @[Counter.scala 62:40]
    node wrap_wrap = eq(sendCount, UInt<2>("h3")) @[Counter.scala 74:24]
    node _wrap_value_T = add(sendCount, UInt<2>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
    node _GEN_0 = mux(_T, _wrap_value_T_1, sendCount) @[Counter.scala 120:16 78:15 62:40]
    node sendDone = and(_T, wrap_wrap) @[Counter.scala 120:{16,23}]
    node _T_1 = and(io_in_ready, io_in_valid) @[Decoupled.scala 50:35]
    node data_lo_lo = cat(io_in_bits_union, io_in_bits_last) @[Serdes.scala 183:24]
    node data_lo_hi_hi = cat(io_in_bits_address, io_in_bits_data) @[Serdes.scala 183:24]
    node data_lo_hi = cat(data_lo_hi_hi, io_in_bits_corrupt) @[Serdes.scala 183:24]
    node data_lo = cat(data_lo_hi, data_lo_lo) @[Serdes.scala 183:24]
    node data_hi_lo = cat(io_in_bits_size, io_in_bits_source) @[Serdes.scala 183:24]
    node data_hi_hi_hi = cat(io_in_bits_chanId, io_in_bits_opcode) @[Serdes.scala 183:24]
    node data_hi_hi = cat(data_hi_hi_hi, io_in_bits_param) @[Serdes.scala 183:24]
    node data_hi = cat(data_hi_hi, data_hi_lo) @[Serdes.scala 183:24]
    node _data_T = cat(data_hi, data_lo) @[Serdes.scala 183:24]
    node _GEN_2 = mux(_T_1, _data_T, data) @[Serdes.scala 182:21 183:10 173:17]
    node _GEN_3 = or(_T_1, sending) @[Serdes.scala 182:21 184:13 175:24]
    node _GEN_6 = shr(data, 32) @[Serdes.scala 187:37]
    node _data_T_1 = pad(_GEN_6, 123) @[Serdes.scala 187:37]
    node _GEN_5 = mux(sendDone, UInt<1>("h0"), _GEN_3) @[Serdes.scala 189:{19,29}]
    io_in_ready <= not(sending) @[Serdes.scala 178:18]
    io_out_valid <= sending @[Serdes.scala 179:16]
    io_out_bits <= bits(data, 31, 0) @[Serdes.scala 180:22]
    data <= mux(_T, _data_T_1, _GEN_2) @[Serdes.scala 187:{22,29}]
    sending <= mux(reset, UInt<1>("h0"), _GEN_5) @[Serdes.scala 175:{24,24}]
    sendCount <= mux(reset, UInt<2>("h0"), _GEN_0) @[Counter.scala 62:{40,40}]

  module GenericDeserializer_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_in_ready : UInt<1>
    input io_in_valid : UInt<1>
    input io_in_bits : UInt<32>
    input io_out_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_out_bits_chanId : UInt<3>
    output io_out_bits_opcode : UInt<3>
    output io_out_bits_param : UInt<3>
    output io_out_bits_size : UInt<4>
    output io_out_bits_source : UInt<4>
    output io_out_bits_address : UInt<32>
    output io_out_bits_data : UInt<64>
    output io_out_bits_corrupt : UInt<1>
    output io_out_bits_union : UInt<8>

    reg data_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), data_0) @[Serdes.scala 200:17]
    reg data_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), data_1) @[Serdes.scala 200:17]
    reg data_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), data_2) @[Serdes.scala 200:17]
    reg data_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), data_3) @[Serdes.scala 200:17]
    reg receiving : UInt<1>, clock with :
      reset => (UInt<1>("h0"), receiving) @[Serdes.scala 202:26]
    node _T = and(io_in_ready, io_in_valid) @[Decoupled.scala 50:35]
    reg recvCount : UInt<2>, clock with :
      reset => (UInt<1>("h0"), recvCount) @[Counter.scala 62:40]
    node wrap_wrap = eq(recvCount, UInt<2>("h3")) @[Counter.scala 74:24]
    node _wrap_value_T = add(recvCount, UInt<2>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
    node _GEN_0 = mux(_T, _wrap_value_T_1, recvCount) @[Counter.scala 120:16 78:15 62:40]
    node recvDone = and(_T, wrap_wrap) @[Counter.scala 120:{16,23}]
    node io_out_bits_lo = cat(data_1, data_0) @[Serdes.scala 207:23]
    node io_out_bits_hi = cat(data_3, data_2) @[Serdes.scala 207:23]
    node _io_out_bits_T = cat(io_out_bits_hi, io_out_bits_lo) @[Serdes.scala 207:23]
    node _io_out_bits_WIRE_1 = bits(_io_out_bits_T, 122, 0)
    node _GEN_2 = mux(eq(UInt<2>("h0"), recvCount), io_in_bits, data_0) @[Serdes.scala 200:17 210:{21,21}]
    node _GEN_3 = mux(eq(UInt<2>("h1"), recvCount), io_in_bits, data_1) @[Serdes.scala 200:17 210:{21,21}]
    node _GEN_4 = mux(eq(UInt<2>("h2"), recvCount), io_in_bits, data_2) @[Serdes.scala 200:17 210:{21,21}]
    node _GEN_5 = mux(eq(UInt<2>("h3"), recvCount), io_in_bits, data_3) @[Serdes.scala 200:17 210:{21,21}]
    node _GEN_10 = mux(recvDone, UInt<1>("h0"), receiving) @[Serdes.scala 213:19 202:26 213:31]
    node _T_2 = and(io_out_ready, io_out_valid) @[Decoupled.scala 50:35]
    node _GEN_11 = or(_T_2, _GEN_10) @[Serdes.scala 215:{22,34}]
    io_in_ready <= receiving @[Serdes.scala 205:15]
    io_out_valid <= not(receiving) @[Serdes.scala 206:19]
    io_out_bits_chanId <= bits(_io_out_bits_WIRE_1, 122, 120) @[Serdes.scala 207:38]
    io_out_bits_opcode <= bits(_io_out_bits_WIRE_1, 119, 117) @[Serdes.scala 207:38]
    io_out_bits_param <= bits(_io_out_bits_WIRE_1, 116, 114) @[Serdes.scala 207:38]
    io_out_bits_size <= bits(_io_out_bits_WIRE_1, 113, 110) @[Serdes.scala 207:38]
    io_out_bits_source <= bits(_io_out_bits_WIRE_1, 109, 106) @[Serdes.scala 207:38]
    io_out_bits_address <= bits(_io_out_bits_WIRE_1, 105, 74) @[Serdes.scala 207:38]
    io_out_bits_data <= bits(_io_out_bits_WIRE_1, 73, 10) @[Serdes.scala 207:38]
    io_out_bits_corrupt <= bits(_io_out_bits_WIRE_1, 9, 9) @[Serdes.scala 207:38]
    io_out_bits_union <= bits(_io_out_bits_WIRE_1, 8, 1) @[Serdes.scala 207:38]
    data_0 <= mux(_T, _GEN_2, data_0) @[Serdes.scala 200:17 209:21]
    data_1 <= mux(_T, _GEN_3, data_1) @[Serdes.scala 200:17 209:21]
    data_2 <= mux(_T, _GEN_4, data_2) @[Serdes.scala 200:17 209:21]
    data_3 <= mux(_T, _GEN_5, data_3) @[Serdes.scala 200:17 209:21]
    receiving <= or(reset, _GEN_11) @[Serdes.scala 202:{26,26}]
    recvCount <= mux(reset, UInt<2>("h0"), _GEN_0) @[Counter.scala 62:{40,40}]

  extmodule ChipTop :
    input jtag_TCK : Clock
    input jtag_TMS : UInt<1>
    input jtag_TDI : UInt<1>
    output jtag_TDO : UInt<1>
    output serial_tl_clock : Clock
    output serial_tl_bits_in_ready : UInt<1>
    input serial_tl_bits_in_valid : UInt<1>
    input serial_tl_bits_in_bits : UInt<32>
    input serial_tl_bits_out_ready : UInt<1>
    output serial_tl_bits_out_valid : UInt<1>
    output serial_tl_bits_out_bits : UInt<32>
    input custom_boot : UInt<1>
    input clock_clock : Clock
    input reset : AsyncReset
    output axi4_mem_0_clock : Clock
    output axi4_mem_0_reset : UInt<1>
    input axi4_mem_0_bits_aw_ready : UInt<1>
    output axi4_mem_0_bits_aw_valid : UInt<1>
    output axi4_mem_0_bits_aw_bits_id : UInt<4>
    output axi4_mem_0_bits_aw_bits_addr : UInt<32>
    output axi4_mem_0_bits_aw_bits_len : UInt<8>
    output axi4_mem_0_bits_aw_bits_size : UInt<3>
    output axi4_mem_0_bits_aw_bits_burst : UInt<2>
    output axi4_mem_0_bits_aw_bits_lock : UInt<1>
    output axi4_mem_0_bits_aw_bits_cache : UInt<4>
    output axi4_mem_0_bits_aw_bits_prot : UInt<3>
    output axi4_mem_0_bits_aw_bits_qos : UInt<4>
    input axi4_mem_0_bits_w_ready : UInt<1>
    output axi4_mem_0_bits_w_valid : UInt<1>
    output axi4_mem_0_bits_w_bits_data : UInt<64>
    output axi4_mem_0_bits_w_bits_strb : UInt<8>
    output axi4_mem_0_bits_w_bits_last : UInt<1>
    output axi4_mem_0_bits_b_ready : UInt<1>
    input axi4_mem_0_bits_b_valid : UInt<1>
    input axi4_mem_0_bits_b_bits_id : UInt<4>
    input axi4_mem_0_bits_b_bits_resp : UInt<2>
    input axi4_mem_0_bits_ar_ready : UInt<1>
    output axi4_mem_0_bits_ar_valid : UInt<1>
    output axi4_mem_0_bits_ar_bits_id : UInt<4>
    output axi4_mem_0_bits_ar_bits_addr : UInt<32>
    output axi4_mem_0_bits_ar_bits_len : UInt<8>
    output axi4_mem_0_bits_ar_bits_size : UInt<3>
    output axi4_mem_0_bits_ar_bits_burst : UInt<2>
    output axi4_mem_0_bits_ar_bits_lock : UInt<1>
    output axi4_mem_0_bits_ar_bits_cache : UInt<4>
    output axi4_mem_0_bits_ar_bits_prot : UInt<3>
    output axi4_mem_0_bits_ar_bits_qos : UInt<4>
    output axi4_mem_0_bits_r_ready : UInt<1>
    input axi4_mem_0_bits_r_valid : UInt<1>
    input axi4_mem_0_bits_r_bits_id : UInt<4>
    input axi4_mem_0_bits_r_bits_data : UInt<64>
    input axi4_mem_0_bits_r_bits_resp : UInt<2>
    input axi4_mem_0_bits_r_bits_last : UInt<1>
    output uart_0_txd : UInt<1>
    input uart_0_rxd : UInt<1>
    defname = ChipTop

  extmodule SimJTAG :
    input clock : Clock
    input reset : UInt<1>
    output jtag_TRSTn : UInt<1>
    output jtag_TCK : Clock
    output jtag_TMS : UInt<1>
    output jtag_TDI : UInt<1>
    input jtag_TDO_data : UInt<1>
    input jtag_TDO_driven : UInt<1>
    input enable : UInt<1>
    input init_done : UInt<1>
    output exit : UInt<32>
    defname = SimJTAG
    parameter TICK_DELAY = 3

  extmodule plusarg_reader_127 :
    output out : UInt<32>
    defname = plusarg_reader
    parameter FORMAT = "jtag_rbb_enable=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  module AsyncResetSynchronizerShiftReg_w4_d3_i0_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_d : UInt<4>
    output io_q : UInt<4>

    inst output_chain of AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    inst output_chain_1 of AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    inst output_chain_2 of AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    inst output_chain_3 of AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    node output_1 = output_chain_1.io_q @[ShiftReg.scala 48:{24,24}]
    node output_0 = output_chain.io_q @[ShiftReg.scala 48:{24,24}]
    node io_q_lo = cat(output_1, output_0) @[Cat.scala 31:58]
    node output_3 = output_chain_3.io_q @[ShiftReg.scala 48:{24,24}]
    node output_2 = output_chain_2.io_q @[ShiftReg.scala 48:{24,24}]
    node io_q_hi = cat(output_3, output_2) @[Cat.scala 31:58]
    io_q <= cat(io_q_hi, io_q_lo) @[Cat.scala 31:58]
    output_chain.clock <= clock
    output_chain.reset <= asAsyncReset(reset) @[SynchronizerReg.scala 86:21]
    output_chain.io_d <= bits(io_d, 0, 0) @[SynchronizerReg.scala 87:41]
    output_chain_1.clock <= clock
    output_chain_1.reset <= asAsyncReset(reset) @[SynchronizerReg.scala 86:21]
    output_chain_1.io_d <= bits(io_d, 1, 1) @[SynchronizerReg.scala 87:41]
    output_chain_2.clock <= clock
    output_chain_2.reset <= asAsyncReset(reset) @[SynchronizerReg.scala 86:21]
    output_chain_2.io_d <= bits(io_d, 2, 2) @[SynchronizerReg.scala 87:41]
    output_chain_3.clock <= clock
    output_chain_3.reset <= asAsyncReset(reset) @[SynchronizerReg.scala 86:21]
    output_chain_3.io_d <= bits(io_d, 3, 3) @[SynchronizerReg.scala 87:41]

  module AsyncQueueSource_3_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<32>
    output io_async_mem_0 : UInt<32>
    output io_async_mem_1 : UInt<32>
    output io_async_mem_2 : UInt<32>
    output io_async_mem_3 : UInt<32>
    output io_async_mem_4 : UInt<32>
    output io_async_mem_5 : UInt<32>
    output io_async_mem_6 : UInt<32>
    output io_async_mem_7 : UInt<32>
    input io_async_ridx : UInt<4>
    output io_async_widx : UInt<4>
    input io_async_safe_ridx_valid : UInt<1>
    output io_async_safe_widx_valid : UInt<1>
    output io_async_safe_source_reset_n : UInt<1>
    input io_async_safe_sink_reset_n : UInt<1>

    inst ridx_ridx_gray of AsyncResetSynchronizerShiftReg_w4_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    inst source_valid_0 of AsyncValidSync_inTestHarness @[AsyncQueue.scala 100:32]
    inst source_valid_1 of AsyncValidSync_inTestHarness @[AsyncQueue.scala 101:32]
    inst sink_extend of AsyncValidSync_inTestHarness @[AsyncQueue.scala 103:30]
    inst sink_valid of AsyncValidSync_inTestHarness @[AsyncQueue.scala 104:30]
    reg mem_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_0) @[AsyncQueue.scala 80:16]
    reg mem_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_1) @[AsyncQueue.scala 80:16]
    reg mem_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_2) @[AsyncQueue.scala 80:16]
    reg mem_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_3) @[AsyncQueue.scala 80:16]
    reg mem_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_4) @[AsyncQueue.scala 80:16]
    reg mem_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_5) @[AsyncQueue.scala 80:16]
    reg mem_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_6) @[AsyncQueue.scala 80:16]
    reg mem_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), mem_7) @[AsyncQueue.scala 80:16]
    node _widx_T = asAsyncReset(reset) @[AsyncQueue.scala 81:30]
    node _widx_T_1 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node sink_ready = sink_valid.io_out
    node _widx_T_2 = not(sink_ready) @[AsyncQueue.scala 81:79]
    reg widx_widx_bin : UInt<4>, clock with :
      reset => (_widx_T, UInt<4>("h0")) @[AsyncQueue.scala 52:25]
    node _GEN_16 = pad(_widx_T_1, 4) @[AsyncQueue.scala 53:43]
    node _widx_incremented_T = add(widx_widx_bin, _GEN_16) @[AsyncQueue.scala 53:43]
    node _widx_incremented_T_1 = tail(_widx_incremented_T, 1) @[AsyncQueue.scala 53:43]
    node widx_incremented = mux(_widx_T_2, UInt<4>("h0"), _widx_incremented_T_1) @[AsyncQueue.scala 53:23]
    node _widx_T_3 = shr(widx_incremented, 1) @[AsyncQueue.scala 54:32]
    node _GEN_17 = pad(_widx_T_3, 4) @[AsyncQueue.scala 54:17]
    node widx = xor(widx_incremented, _GEN_17) @[AsyncQueue.scala 54:17]
    node ridx = ridx_ridx_gray.io_q @[ShiftReg.scala 48:{24,24}]
    node _ready_T = xor(ridx, UInt<4>("hc")) @[AsyncQueue.scala 83:44]
    node _ready_T_1 = neq(widx, _ready_T) @[AsyncQueue.scala 83:34]
    node _index_T = bits(io_async_widx, 2, 0) @[AsyncQueue.scala 85:52]
    node _index_T_1 = bits(io_async_widx, 3, 3) @[AsyncQueue.scala 85:80]
    node _index_T_2 = shl(_index_T_1, 2) @[AsyncQueue.scala 85:93]
    node index = xor(_index_T, _index_T_2) @[AsyncQueue.scala 85:64]
    node _GEN_0 = mux(eq(UInt<3>("h0"), index), io_enq_bits, mem_0) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_1 = mux(eq(UInt<3>("h1"), index), io_enq_bits, mem_1) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_2 = mux(eq(UInt<3>("h2"), index), io_enq_bits, mem_2) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_3 = mux(eq(UInt<3>("h3"), index), io_enq_bits, mem_3) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_4 = mux(eq(UInt<3>("h4"), index), io_enq_bits, mem_4) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_5 = mux(eq(UInt<3>("h5"), index), io_enq_bits, mem_5) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_6 = mux(eq(UInt<3>("h6"), index), io_enq_bits, mem_6) @[AsyncQueue.scala 80:16 86:{37,37}]
    node _GEN_7 = mux(eq(UInt<3>("h7"), index), io_enq_bits, mem_7) @[AsyncQueue.scala 80:16 86:{37,37}]
    reg ready_reg : UInt<1>, clock with :
      reset => (_widx_T, UInt<1>("h0")) @[AsyncQueue.scala 88:56]
    reg widx_gray : UInt<4>, clock with :
      reset => (_widx_T, UInt<4>("h0")) @[AsyncQueue.scala 91:55]
    node _source_valid_0_reset_T_1 = not(io_async_safe_sink_reset_n) @[AsyncQueue.scala 105:46]
    node _source_valid_0_reset_T_2 = or(reset, _source_valid_0_reset_T_1) @[AsyncQueue.scala 105:43]
    io_enq_ready <= and(ready_reg, sink_ready) @[AsyncQueue.scala 89:29]
    io_async_mem_0 <= mem_0 @[AsyncQueue.scala 96:31]
    io_async_mem_1 <= mem_1 @[AsyncQueue.scala 96:31]
    io_async_mem_2 <= mem_2 @[AsyncQueue.scala 96:31]
    io_async_mem_3 <= mem_3 @[AsyncQueue.scala 96:31]
    io_async_mem_4 <= mem_4 @[AsyncQueue.scala 96:31]
    io_async_mem_5 <= mem_5 @[AsyncQueue.scala 96:31]
    io_async_mem_6 <= mem_6 @[AsyncQueue.scala 96:31]
    io_async_mem_7 <= mem_7 @[AsyncQueue.scala 96:31]
    io_async_widx <= widx_gray @[AsyncQueue.scala 92:17]
    io_async_safe_widx_valid <= source_valid_1.io_out @[AsyncQueue.scala 117:20]
    io_async_safe_source_reset_n <= not(reset) @[AsyncQueue.scala 121:27]
    mem_0 <= mux(_widx_T_1, _GEN_0, mem_0) @[AsyncQueue.scala 80:16 86:24]
    mem_1 <= mux(_widx_T_1, _GEN_1, mem_1) @[AsyncQueue.scala 80:16 86:24]
    mem_2 <= mux(_widx_T_1, _GEN_2, mem_2) @[AsyncQueue.scala 80:16 86:24]
    mem_3 <= mux(_widx_T_1, _GEN_3, mem_3) @[AsyncQueue.scala 80:16 86:24]
    mem_4 <= mux(_widx_T_1, _GEN_4, mem_4) @[AsyncQueue.scala 80:16 86:24]
    mem_5 <= mux(_widx_T_1, _GEN_5, mem_5) @[AsyncQueue.scala 80:16 86:24]
    mem_6 <= mux(_widx_T_1, _GEN_6, mem_6) @[AsyncQueue.scala 80:16 86:24]
    mem_7 <= mux(_widx_T_1, _GEN_7, mem_7) @[AsyncQueue.scala 80:16 86:24]
    widx_widx_bin <= mux(_widx_T_2, UInt<4>("h0"), _widx_incremented_T_1) @[AsyncQueue.scala 53:23]
    ridx_ridx_gray.clock <= clock
    ridx_ridx_gray.reset <= reset
    ridx_ridx_gray.io_d <= io_async_ridx @[ShiftReg.scala 47:16]
    ready_reg <= and(sink_ready, _ready_T_1) @[AsyncQueue.scala 83:26]
    widx_gray <= xor(widx_incremented, _GEN_17) @[AsyncQueue.scala 54:17]
    source_valid_0.io_in <= UInt<1>("h1") @[AsyncQueue.scala 115:26]
    source_valid_0.clock <= clock @[AsyncQueue.scala 110:26]
    source_valid_0.reset <= asAsyncReset(_source_valid_0_reset_T_2) @[AsyncQueue.scala 105:65]
    source_valid_1.io_in <= source_valid_0.io_out @[AsyncQueue.scala 116:26]
    source_valid_1.clock <= clock @[AsyncQueue.scala 111:26]
    source_valid_1.reset <= asAsyncReset(_source_valid_0_reset_T_2) @[AsyncQueue.scala 106:65]
    sink_extend.io_in <= io_async_safe_ridx_valid @[AsyncQueue.scala 118:23]
    sink_extend.clock <= clock @[AsyncQueue.scala 112:26]
    sink_extend.reset <= asAsyncReset(_source_valid_0_reset_T_2) @[AsyncQueue.scala 107:65]
    sink_valid.io_in <= sink_extend.io_out @[AsyncQueue.scala 119:22]
    sink_valid.clock <= clock @[AsyncQueue.scala 113:26]
    sink_valid.reset <= asAsyncReset(reset) @[AsyncQueue.scala 108:35]

  module ClockCrossingReg_w32_inTestHarness :
    input clock : Clock
    input io_d : UInt<32>
    output io_q : UInt<32>
    input io_en : UInt<1>

    reg cdc_reg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), cdc_reg) @[Reg.scala 16:16]
    io_q <= cdc_reg @[SynchronizerReg.scala 202:8]
    cdc_reg <= mux(io_en, io_d, cdc_reg) @[Reg.scala 16:16 17:{18,22}]

  module AsyncQueueSink_3_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<32>
    input io_async_mem_0 : UInt<32>
    input io_async_mem_1 : UInt<32>
    input io_async_mem_2 : UInt<32>
    input io_async_mem_3 : UInt<32>
    input io_async_mem_4 : UInt<32>
    input io_async_mem_5 : UInt<32>
    input io_async_mem_6 : UInt<32>
    input io_async_mem_7 : UInt<32>
    output io_async_ridx : UInt<4>
    input io_async_widx : UInt<4>
    output io_async_safe_ridx_valid : UInt<1>
    input io_async_safe_widx_valid : UInt<1>
    input io_async_safe_source_reset_n : UInt<1>
    output io_async_safe_sink_reset_n : UInt<1>

    inst widx_widx_gray of AsyncResetSynchronizerShiftReg_w4_d3_i0_inTestHarness @[ShiftReg.scala 45:23]
    inst io_deq_bits_deq_bits_reg of ClockCrossingReg_w32_inTestHarness @[SynchronizerReg.scala 207:25]
    inst sink_valid_0 of AsyncValidSync_inTestHarness @[AsyncQueue.scala 168:33]
    inst sink_valid_1 of AsyncValidSync_inTestHarness @[AsyncQueue.scala 169:33]
    inst source_extend of AsyncValidSync_inTestHarness @[AsyncQueue.scala 171:31]
    inst source_valid of AsyncValidSync_inTestHarness @[AsyncQueue.scala 172:31]
    node _ridx_T = asAsyncReset(reset) @[AsyncQueue.scala 144:30]
    node _ridx_T_1 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node source_ready = source_valid.io_out
    node _ridx_T_2 = not(source_ready) @[AsyncQueue.scala 144:79]
    reg ridx_ridx_bin : UInt<4>, clock with :
      reset => (_ridx_T, UInt<4>("h0")) @[AsyncQueue.scala 52:25]
    node _GEN_8 = pad(_ridx_T_1, 4) @[AsyncQueue.scala 53:43]
    node _ridx_incremented_T = add(ridx_ridx_bin, _GEN_8) @[AsyncQueue.scala 53:43]
    node _ridx_incremented_T_1 = tail(_ridx_incremented_T, 1) @[AsyncQueue.scala 53:43]
    node ridx_incremented = mux(_ridx_T_2, UInt<4>("h0"), _ridx_incremented_T_1) @[AsyncQueue.scala 53:23]
    node _ridx_T_3 = shr(ridx_incremented, 1) @[AsyncQueue.scala 54:32]
    node _GEN_9 = pad(_ridx_T_3, 4) @[AsyncQueue.scala 54:17]
    node ridx = xor(ridx_incremented, _GEN_9) @[AsyncQueue.scala 54:17]
    node widx = widx_widx_gray.io_q @[ShiftReg.scala 48:{24,24}]
    node _valid_T = neq(ridx, widx) @[AsyncQueue.scala 146:36]
    node _index_T = bits(ridx, 2, 0) @[AsyncQueue.scala 152:43]
    node _index_T_1 = bits(ridx, 3, 3) @[AsyncQueue.scala 152:62]
    node _index_T_2 = shl(_index_T_1, 2) @[AsyncQueue.scala 152:75]
    node index = xor(_index_T, _index_T_2) @[AsyncQueue.scala 152:55]
    node _GEN_1 = mux(eq(UInt<3>("h1"), index), io_async_mem_1, io_async_mem_0) @[SynchronizerReg.scala 209:{18,18}]
    node _GEN_2 = mux(eq(UInt<3>("h2"), index), io_async_mem_2, _GEN_1) @[SynchronizerReg.scala 209:{18,18}]
    node _GEN_3 = mux(eq(UInt<3>("h3"), index), io_async_mem_3, _GEN_2) @[SynchronizerReg.scala 209:{18,18}]
    node _GEN_4 = mux(eq(UInt<3>("h4"), index), io_async_mem_4, _GEN_3) @[SynchronizerReg.scala 209:{18,18}]
    node _GEN_5 = mux(eq(UInt<3>("h5"), index), io_async_mem_5, _GEN_4) @[SynchronizerReg.scala 209:{18,18}]
    node _GEN_6 = mux(eq(UInt<3>("h6"), index), io_async_mem_6, _GEN_5) @[SynchronizerReg.scala 209:{18,18}]
    reg valid_reg : UInt<1>, clock with :
      reset => (_ridx_T, UInt<1>("h0")) @[AsyncQueue.scala 161:56]
    reg ridx_gray : UInt<4>, clock with :
      reset => (_ridx_T, UInt<4>("h0")) @[AsyncQueue.scala 164:55]
    node _sink_valid_0_reset_T_1 = not(io_async_safe_source_reset_n) @[AsyncQueue.scala 173:45]
    node _sink_valid_0_reset_T_2 = or(reset, _sink_valid_0_reset_T_1) @[AsyncQueue.scala 173:42]
    io_deq_valid <= and(valid_reg, source_ready) @[AsyncQueue.scala 162:29]
    io_deq_bits <= io_deq_bits_deq_bits_reg.io_q @[SynchronizerReg.scala 211:{26,26}]
    io_async_ridx <= ridx_gray @[AsyncQueue.scala 165:17]
    io_async_safe_ridx_valid <= sink_valid_1.io_out @[AsyncQueue.scala 185:20]
    io_async_safe_sink_reset_n <= not(reset) @[AsyncQueue.scala 189:25]
    ridx_ridx_bin <= mux(_ridx_T_2, UInt<4>("h0"), _ridx_incremented_T_1) @[AsyncQueue.scala 53:23]
    widx_widx_gray.clock <= clock
    widx_widx_gray.reset <= reset
    widx_widx_gray.io_d <= io_async_widx @[ShiftReg.scala 47:16]
    io_deq_bits_deq_bits_reg.clock <= clock
    io_deq_bits_deq_bits_reg.io_d <= mux(eq(UInt<3>("h7"), index), io_async_mem_7, _GEN_6) @[SynchronizerReg.scala 209:{18,18}]
    io_deq_bits_deq_bits_reg.io_en <= and(source_ready, _valid_T) @[AsyncQueue.scala 146:28]
    valid_reg <= and(source_ready, _valid_T) @[AsyncQueue.scala 146:28]
    ridx_gray <= xor(ridx_incremented, _GEN_9) @[AsyncQueue.scala 54:17]
    sink_valid_0.io_in <= UInt<1>("h1") @[AsyncQueue.scala 183:24]
    sink_valid_0.clock <= clock @[AsyncQueue.scala 178:25]
    sink_valid_0.reset <= asAsyncReset(_sink_valid_0_reset_T_2) @[AsyncQueue.scala 173:66]
    sink_valid_1.io_in <= sink_valid_0.io_out @[AsyncQueue.scala 184:24]
    sink_valid_1.clock <= clock @[AsyncQueue.scala 179:25]
    sink_valid_1.reset <= asAsyncReset(_sink_valid_0_reset_T_2) @[AsyncQueue.scala 174:66]
    source_extend.io_in <= io_async_safe_widx_valid @[AsyncQueue.scala 186:25]
    source_extend.clock <= clock @[AsyncQueue.scala 180:25]
    source_extend.reset <= asAsyncReset(_sink_valid_0_reset_T_2) @[AsyncQueue.scala 175:66]
    source_valid.io_in <= source_extend.io_out @[AsyncQueue.scala 187:24]
    source_valid.clock <= clock @[AsyncQueue.scala 181:25]
    source_valid.reset <= asAsyncReset(reset) @[AsyncQueue.scala 176:34]

  module AsyncQueue_inTestHarness :
    input io_enq_clock : Clock
    input io_enq_reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<32>
    input io_deq_clock : Clock
    input io_deq_reset : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<32>

    inst source of AsyncQueueSource_3_inTestHarness @[AsyncQueue.scala 224:22]
    inst sink of AsyncQueueSink_3_inTestHarness @[AsyncQueue.scala 225:22]
    io_enq_ready <= source.io_enq_ready @[AsyncQueue.scala 232:17]
    io_deq_valid <= sink.io_deq_valid @[AsyncQueue.scala 233:10]
    io_deq_bits <= sink.io_deq_bits @[AsyncQueue.scala 233:10]
    source.clock <= io_enq_clock @[AsyncQueue.scala 227:16]
    source.reset <= io_enq_reset @[AsyncQueue.scala 228:16]
    source.io_enq_valid <= io_enq_valid @[AsyncQueue.scala 232:17]
    source.io_enq_bits <= io_enq_bits @[AsyncQueue.scala 232:17]
    source.io_async_ridx <= sink.io_async_ridx @[AsyncQueue.scala 234:17]
    source.io_async_safe_ridx_valid <= sink.io_async_safe_ridx_valid @[AsyncQueue.scala 234:17]
    source.io_async_safe_sink_reset_n <= sink.io_async_safe_sink_reset_n @[AsyncQueue.scala 234:17]
    sink.clock <= io_deq_clock @[AsyncQueue.scala 229:14]
    sink.reset <= io_deq_reset @[AsyncQueue.scala 230:14]
    sink.io_deq_ready <= io_deq_ready @[AsyncQueue.scala 233:10]
    sink.io_async_mem_0 <= source.io_async_mem_0 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_1 <= source.io_async_mem_1 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_2 <= source.io_async_mem_2 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_3 <= source.io_async_mem_3 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_4 <= source.io_async_mem_4 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_5 <= source.io_async_mem_5 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_6 <= source.io_async_mem_6 @[AsyncQueue.scala 234:17]
    sink.io_async_mem_7 <= source.io_async_mem_7 @[AsyncQueue.scala 234:17]
    sink.io_async_widx <= source.io_async_widx @[AsyncQueue.scala 234:17]
    sink.io_async_safe_widx_valid <= source.io_async_safe_widx_valid @[AsyncQueue.scala 234:17]
    sink.io_async_safe_source_reset_n <= source.io_async_safe_source_reset_n @[AsyncQueue.scala 234:17]

  module SerialAdapter_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input auto_out_a_ready : UInt<1>
    output auto_out_a_valid : UInt<1>
    output auto_out_a_bits_opcode : UInt<3>
    output auto_out_a_bits_size : UInt<4>
    output auto_out_a_bits_address : UInt<32>
    output auto_out_a_bits_mask : UInt<8>
    output auto_out_a_bits_data : UInt<64>
    output auto_out_d_ready : UInt<1>
    input auto_out_d_valid : UInt<1>
    input auto_out_d_bits_data : UInt<64>
    output io_serial_in_ready : UInt<1>
    input io_serial_in_valid : UInt<1>
    input io_serial_in_bits : UInt<32>
    input io_serial_out_ready : UInt<1>
    output io_serial_out_valid : UInt<1>
    output io_serial_out_bits : UInt<32>

    reg cmd : UInt<32>, clock with :
      reset => (UInt<1>("h0"), cmd) @[SerialAdapter.scala 150:16]
    reg addr : UInt<64>, clock with :
      reset => (UInt<1>("h0"), addr) @[SerialAdapter.scala 151:17]
    reg len : UInt<64>, clock with :
      reset => (UInt<1>("h0"), len) @[SerialAdapter.scala 152:16]
    reg body_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), body_0) @[SerialAdapter.scala 153:17]
    reg body_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), body_1) @[SerialAdapter.scala 153:17]
    reg bodyValid : UInt<2>, clock with :
      reset => (UInt<1>("h0"), bodyValid) @[SerialAdapter.scala 154:22]
    reg idx : UInt<1>, clock with :
      reset => (UInt<1>("h0"), idx) @[SerialAdapter.scala 155:16]
    reg state : UInt<4>, clock with :
      reset => (UInt<1>("h0"), state) @[SerialAdapter.scala 161:22]
    node _io_serial_in_ready_T = eq(state, UInt<4>("h0")) @[package.scala 15:47]
    node _io_serial_in_ready_T_1 = eq(state, UInt<4>("h1")) @[package.scala 15:47]
    node _io_serial_in_ready_T_2 = eq(state, UInt<4>("h2")) @[package.scala 15:47]
    node _io_serial_in_ready_T_3 = eq(state, UInt<4>("h6")) @[package.scala 15:47]
    node _io_serial_in_ready_T_4 = or(_io_serial_in_ready_T, _io_serial_in_ready_T_1) @[package.scala 72:59]
    node _io_serial_in_ready_T_5 = or(_io_serial_in_ready_T_4, _io_serial_in_ready_T_2) @[package.scala 72:59]
    node _io_serial_out_valid_T = eq(state, UInt<4>("h5")) @[SerialAdapter.scala 164:32]
    node beatAddr = bits(addr, 31, 3) @[SerialAdapter.scala 167:22]
    node _nextAddr_T = add(beatAddr, UInt<29>("h1")) @[SerialAdapter.scala 168:31]
    node _nextAddr_T_1 = tail(_nextAddr_T, 1) @[SerialAdapter.scala 168:31]
    node nextAddr = cat(_nextAddr_T_1, UInt<3>("h0")) @[Cat.scala 31:58]
    node _wmask_T = bits(bodyValid, 0, 0) @[Bitwise.scala 27:51]
    node _wmask_T_1 = bits(bodyValid, 1, 1) @[Bitwise.scala 27:51]
    node _wmask_T_3 = mux(_wmask_T, UInt<4>("hf"), UInt<4>("h0")) @[Bitwise.scala 74:12]
    node _wmask_T_5 = mux(_wmask_T_1, UInt<4>("hf"), UInt<4>("h0")) @[Bitwise.scala 74:12]
    node wmask = cat(_wmask_T_5, _wmask_T_3) @[Cat.scala 31:58]
    node _GEN_55 = pad(nextAddr, 64) @[SerialAdapter.scala 171:28]
    node _addr_size_T = sub(_GEN_55, addr) @[SerialAdapter.scala 171:28]
    node addr_size = tail(_addr_size_T, 1) @[SerialAdapter.scala 171:28]
    node _len_size_T = add(len, UInt<64>("h1")) @[SerialAdapter.scala 172:26]
    node _len_size_T_1 = tail(_len_size_T, 1) @[SerialAdapter.scala 172:26]
    node len_size = cat(_len_size_T_1, UInt<2>("h0")) @[Cat.scala 31:58]
    node _GEN_56 = pad(addr_size, 66) @[SerialAdapter.scala 173:31]
    node _raw_size_T = lt(len_size, _GEN_56) @[SerialAdapter.scala 173:31]
    node raw_size = mux(_raw_size_T, len_size, pad(addr_size, 66)) @[SerialAdapter.scala 173:21]
    node _rsize_T = eq(UInt<66>("h1"), raw_size) @[Mux.scala 81:61]
    node _rsize_T_1 = mux(_rsize_T, UInt<2>("h0"), UInt<2>("h3")) @[Mux.scala 81:58]
    node _rsize_T_2 = eq(UInt<66>("h2"), raw_size) @[Mux.scala 81:61]
    node _rsize_T_3 = mux(_rsize_T_2, UInt<2>("h1"), _rsize_T_1) @[Mux.scala 81:58]
    node _rsize_T_4 = eq(UInt<66>("h4"), raw_size) @[Mux.scala 81:61]
    node rsize = mux(_rsize_T_4, UInt<2>("h2"), _rsize_T_3) @[Mux.scala 81:58]
    node _pow2size_T = bits(raw_size, 0, 0) @[Bitwise.scala 50:65]
    node _pow2size_T_1 = bits(raw_size, 1, 1) @[Bitwise.scala 50:65]
    node _pow2size_T_2 = bits(raw_size, 2, 2) @[Bitwise.scala 50:65]
    node _pow2size_T_3 = bits(raw_size, 3, 3) @[Bitwise.scala 50:65]
    node _pow2size_T_4 = bits(raw_size, 4, 4) @[Bitwise.scala 50:65]
    node _pow2size_T_5 = bits(raw_size, 5, 5) @[Bitwise.scala 50:65]
    node _pow2size_T_6 = bits(raw_size, 6, 6) @[Bitwise.scala 50:65]
    node _pow2size_T_7 = bits(raw_size, 7, 7) @[Bitwise.scala 50:65]
    node _pow2size_T_8 = bits(raw_size, 8, 8) @[Bitwise.scala 50:65]
    node _pow2size_T_9 = bits(raw_size, 9, 9) @[Bitwise.scala 50:65]
    node _pow2size_T_10 = bits(raw_size, 10, 10) @[Bitwise.scala 50:65]
    node _pow2size_T_11 = bits(raw_size, 11, 11) @[Bitwise.scala 50:65]
    node _pow2size_T_12 = bits(raw_size, 12, 12) @[Bitwise.scala 50:65]
    node _pow2size_T_13 = bits(raw_size, 13, 13) @[Bitwise.scala 50:65]
    node _pow2size_T_14 = bits(raw_size, 14, 14) @[Bitwise.scala 50:65]
    node _pow2size_T_15 = bits(raw_size, 15, 15) @[Bitwise.scala 50:65]
    node _pow2size_T_16 = bits(raw_size, 16, 16) @[Bitwise.scala 50:65]
    node _pow2size_T_17 = bits(raw_size, 17, 17) @[Bitwise.scala 50:65]
    node _pow2size_T_18 = bits(raw_size, 18, 18) @[Bitwise.scala 50:65]
    node _pow2size_T_19 = bits(raw_size, 19, 19) @[Bitwise.scala 50:65]
    node _pow2size_T_20 = bits(raw_size, 20, 20) @[Bitwise.scala 50:65]
    node _pow2size_T_21 = bits(raw_size, 21, 21) @[Bitwise.scala 50:65]
    node _pow2size_T_22 = bits(raw_size, 22, 22) @[Bitwise.scala 50:65]
    node _pow2size_T_23 = bits(raw_size, 23, 23) @[Bitwise.scala 50:65]
    node _pow2size_T_24 = bits(raw_size, 24, 24) @[Bitwise.scala 50:65]
    node _pow2size_T_25 = bits(raw_size, 25, 25) @[Bitwise.scala 50:65]
    node _pow2size_T_26 = bits(raw_size, 26, 26) @[Bitwise.scala 50:65]
    node _pow2size_T_27 = bits(raw_size, 27, 27) @[Bitwise.scala 50:65]
    node _pow2size_T_28 = bits(raw_size, 28, 28) @[Bitwise.scala 50:65]
    node _pow2size_T_29 = bits(raw_size, 29, 29) @[Bitwise.scala 50:65]
    node _pow2size_T_30 = bits(raw_size, 30, 30) @[Bitwise.scala 50:65]
    node _pow2size_T_31 = bits(raw_size, 31, 31) @[Bitwise.scala 50:65]
    node _pow2size_T_32 = bits(raw_size, 32, 32) @[Bitwise.scala 50:65]
    node _pow2size_T_33 = bits(raw_size, 33, 33) @[Bitwise.scala 50:65]
    node _pow2size_T_34 = bits(raw_size, 34, 34) @[Bitwise.scala 50:65]
    node _pow2size_T_35 = bits(raw_size, 35, 35) @[Bitwise.scala 50:65]
    node _pow2size_T_36 = bits(raw_size, 36, 36) @[Bitwise.scala 50:65]
    node _pow2size_T_37 = bits(raw_size, 37, 37) @[Bitwise.scala 50:65]
    node _pow2size_T_38 = bits(raw_size, 38, 38) @[Bitwise.scala 50:65]
    node _pow2size_T_39 = bits(raw_size, 39, 39) @[Bitwise.scala 50:65]
    node _pow2size_T_40 = bits(raw_size, 40, 40) @[Bitwise.scala 50:65]
    node _pow2size_T_41 = bits(raw_size, 41, 41) @[Bitwise.scala 50:65]
    node _pow2size_T_42 = bits(raw_size, 42, 42) @[Bitwise.scala 50:65]
    node _pow2size_T_43 = bits(raw_size, 43, 43) @[Bitwise.scala 50:65]
    node _pow2size_T_44 = bits(raw_size, 44, 44) @[Bitwise.scala 50:65]
    node _pow2size_T_45 = bits(raw_size, 45, 45) @[Bitwise.scala 50:65]
    node _pow2size_T_46 = bits(raw_size, 46, 46) @[Bitwise.scala 50:65]
    node _pow2size_T_47 = bits(raw_size, 47, 47) @[Bitwise.scala 50:65]
    node _pow2size_T_48 = bits(raw_size, 48, 48) @[Bitwise.scala 50:65]
    node _pow2size_T_49 = bits(raw_size, 49, 49) @[Bitwise.scala 50:65]
    node _pow2size_T_50 = bits(raw_size, 50, 50) @[Bitwise.scala 50:65]
    node _pow2size_T_51 = bits(raw_size, 51, 51) @[Bitwise.scala 50:65]
    node _pow2size_T_52 = bits(raw_size, 52, 52) @[Bitwise.scala 50:65]
    node _pow2size_T_53 = bits(raw_size, 53, 53) @[Bitwise.scala 50:65]
    node _pow2size_T_54 = bits(raw_size, 54, 54) @[Bitwise.scala 50:65]
    node _pow2size_T_55 = bits(raw_size, 55, 55) @[Bitwise.scala 50:65]
    node _pow2size_T_56 = bits(raw_size, 56, 56) @[Bitwise.scala 50:65]
    node _pow2size_T_57 = bits(raw_size, 57, 57) @[Bitwise.scala 50:65]
    node _pow2size_T_58 = bits(raw_size, 58, 58) @[Bitwise.scala 50:65]
    node _pow2size_T_59 = bits(raw_size, 59, 59) @[Bitwise.scala 50:65]
    node _pow2size_T_60 = bits(raw_size, 60, 60) @[Bitwise.scala 50:65]
    node _pow2size_T_61 = bits(raw_size, 61, 61) @[Bitwise.scala 50:65]
    node _pow2size_T_62 = bits(raw_size, 62, 62) @[Bitwise.scala 50:65]
    node _pow2size_T_63 = bits(raw_size, 63, 63) @[Bitwise.scala 50:65]
    node _pow2size_T_64 = bits(raw_size, 64, 64) @[Bitwise.scala 50:65]
    node _pow2size_T_65 = bits(raw_size, 65, 65) @[Bitwise.scala 50:65]
    node _pow2size_T_66 = add(_pow2size_T, _pow2size_T_1) @[Bitwise.scala 48:55]
    node _pow2size_T_68 = add(_pow2size_T_2, _pow2size_T_3) @[Bitwise.scala 48:55]
    node _pow2size_T_70 = add(_pow2size_T_66, _pow2size_T_68) @[Bitwise.scala 48:55]
    node _pow2size_T_72 = add(_pow2size_T_4, _pow2size_T_5) @[Bitwise.scala 48:55]
    node _pow2size_T_74 = add(_pow2size_T_6, _pow2size_T_7) @[Bitwise.scala 48:55]
    node _pow2size_T_76 = add(_pow2size_T_72, _pow2size_T_74) @[Bitwise.scala 48:55]
    node _pow2size_T_78 = add(_pow2size_T_70, _pow2size_T_76) @[Bitwise.scala 48:55]
    node _pow2size_T_80 = add(_pow2size_T_8, _pow2size_T_9) @[Bitwise.scala 48:55]
    node _pow2size_T_82 = add(_pow2size_T_10, _pow2size_T_11) @[Bitwise.scala 48:55]
    node _pow2size_T_84 = add(_pow2size_T_80, _pow2size_T_82) @[Bitwise.scala 48:55]
    node _pow2size_T_86 = add(_pow2size_T_12, _pow2size_T_13) @[Bitwise.scala 48:55]
    node _pow2size_T_88 = add(_pow2size_T_14, _pow2size_T_15) @[Bitwise.scala 48:55]
    node _pow2size_T_90 = add(_pow2size_T_86, _pow2size_T_88) @[Bitwise.scala 48:55]
    node _pow2size_T_92 = add(_pow2size_T_84, _pow2size_T_90) @[Bitwise.scala 48:55]
    node _pow2size_T_94 = add(_pow2size_T_78, _pow2size_T_92) @[Bitwise.scala 48:55]
    node _pow2size_T_96 = add(_pow2size_T_16, _pow2size_T_17) @[Bitwise.scala 48:55]
    node _pow2size_T_98 = add(_pow2size_T_18, _pow2size_T_19) @[Bitwise.scala 48:55]
    node _pow2size_T_100 = add(_pow2size_T_96, _pow2size_T_98) @[Bitwise.scala 48:55]
    node _pow2size_T_102 = add(_pow2size_T_20, _pow2size_T_21) @[Bitwise.scala 48:55]
    node _pow2size_T_104 = add(_pow2size_T_22, _pow2size_T_23) @[Bitwise.scala 48:55]
    node _pow2size_T_106 = add(_pow2size_T_102, _pow2size_T_104) @[Bitwise.scala 48:55]
    node _pow2size_T_108 = add(_pow2size_T_100, _pow2size_T_106) @[Bitwise.scala 48:55]
    node _pow2size_T_110 = add(_pow2size_T_24, _pow2size_T_25) @[Bitwise.scala 48:55]
    node _pow2size_T_112 = add(_pow2size_T_26, _pow2size_T_27) @[Bitwise.scala 48:55]
    node _pow2size_T_114 = add(_pow2size_T_110, _pow2size_T_112) @[Bitwise.scala 48:55]
    node _pow2size_T_116 = add(_pow2size_T_28, _pow2size_T_29) @[Bitwise.scala 48:55]
    node _pow2size_T_118 = add(_pow2size_T_31, _pow2size_T_32) @[Bitwise.scala 48:55]
    node _GEN_57 = pad(_pow2size_T_30, 2) @[Bitwise.scala 48:55]
    node _pow2size_T_120 = add(_GEN_57, _pow2size_T_118) @[Bitwise.scala 48:55]
    node _pow2size_T_121 = bits(_pow2size_T_120, 1, 0) @[Bitwise.scala 48:55]
    node _pow2size_T_122 = add(_pow2size_T_116, _pow2size_T_121) @[Bitwise.scala 48:55]
    node _pow2size_T_124 = add(_pow2size_T_114, _pow2size_T_122) @[Bitwise.scala 48:55]
    node _pow2size_T_126 = add(_pow2size_T_108, _pow2size_T_124) @[Bitwise.scala 48:55]
    node _pow2size_T_128 = add(_pow2size_T_94, _pow2size_T_126) @[Bitwise.scala 48:55]
    node _pow2size_T_130 = add(_pow2size_T_33, _pow2size_T_34) @[Bitwise.scala 48:55]
    node _pow2size_T_132 = add(_pow2size_T_35, _pow2size_T_36) @[Bitwise.scala 48:55]
    node _pow2size_T_134 = add(_pow2size_T_130, _pow2size_T_132) @[Bitwise.scala 48:55]
    node _pow2size_T_136 = add(_pow2size_T_37, _pow2size_T_38) @[Bitwise.scala 48:55]
    node _pow2size_T_138 = add(_pow2size_T_39, _pow2size_T_40) @[Bitwise.scala 48:55]
    node _pow2size_T_140 = add(_pow2size_T_136, _pow2size_T_138) @[Bitwise.scala 48:55]
    node _pow2size_T_142 = add(_pow2size_T_134, _pow2size_T_140) @[Bitwise.scala 48:55]
    node _pow2size_T_144 = add(_pow2size_T_41, _pow2size_T_42) @[Bitwise.scala 48:55]
    node _pow2size_T_146 = add(_pow2size_T_43, _pow2size_T_44) @[Bitwise.scala 48:55]
    node _pow2size_T_148 = add(_pow2size_T_144, _pow2size_T_146) @[Bitwise.scala 48:55]
    node _pow2size_T_150 = add(_pow2size_T_45, _pow2size_T_46) @[Bitwise.scala 48:55]
    node _pow2size_T_152 = add(_pow2size_T_47, _pow2size_T_48) @[Bitwise.scala 48:55]
    node _pow2size_T_154 = add(_pow2size_T_150, _pow2size_T_152) @[Bitwise.scala 48:55]
    node _pow2size_T_156 = add(_pow2size_T_148, _pow2size_T_154) @[Bitwise.scala 48:55]
    node _pow2size_T_158 = add(_pow2size_T_142, _pow2size_T_156) @[Bitwise.scala 48:55]
    node _pow2size_T_160 = add(_pow2size_T_49, _pow2size_T_50) @[Bitwise.scala 48:55]
    node _pow2size_T_162 = add(_pow2size_T_51, _pow2size_T_52) @[Bitwise.scala 48:55]
    node _pow2size_T_164 = add(_pow2size_T_160, _pow2size_T_162) @[Bitwise.scala 48:55]
    node _pow2size_T_166 = add(_pow2size_T_53, _pow2size_T_54) @[Bitwise.scala 48:55]
    node _pow2size_T_168 = add(_pow2size_T_55, _pow2size_T_56) @[Bitwise.scala 48:55]
    node _pow2size_T_170 = add(_pow2size_T_166, _pow2size_T_168) @[Bitwise.scala 48:55]
    node _pow2size_T_172 = add(_pow2size_T_164, _pow2size_T_170) @[Bitwise.scala 48:55]
    node _pow2size_T_174 = add(_pow2size_T_57, _pow2size_T_58) @[Bitwise.scala 48:55]
    node _pow2size_T_176 = add(_pow2size_T_59, _pow2size_T_60) @[Bitwise.scala 48:55]
    node _pow2size_T_178 = add(_pow2size_T_174, _pow2size_T_176) @[Bitwise.scala 48:55]
    node _pow2size_T_180 = add(_pow2size_T_61, _pow2size_T_62) @[Bitwise.scala 48:55]
    node _pow2size_T_182 = add(_pow2size_T_64, _pow2size_T_65) @[Bitwise.scala 48:55]
    node _GEN_58 = pad(_pow2size_T_63, 2) @[Bitwise.scala 48:55]
    node _pow2size_T_184 = add(_GEN_58, _pow2size_T_182) @[Bitwise.scala 48:55]
    node _pow2size_T_185 = bits(_pow2size_T_184, 1, 0) @[Bitwise.scala 48:55]
    node _pow2size_T_186 = add(_pow2size_T_180, _pow2size_T_185) @[Bitwise.scala 48:55]
    node _pow2size_T_188 = add(_pow2size_T_178, _pow2size_T_186) @[Bitwise.scala 48:55]
    node _pow2size_T_190 = add(_pow2size_T_172, _pow2size_T_188) @[Bitwise.scala 48:55]
    node _pow2size_T_192 = add(_pow2size_T_158, _pow2size_T_190) @[Bitwise.scala 48:55]
    node _pow2size_T_194 = add(_pow2size_T_128, _pow2size_T_192) @[Bitwise.scala 48:55]
    node pow2size = eq(_pow2size_T_194, UInt<7>("h1")) @[SerialAdapter.scala 177:37]
    node _byteAddr_T = bits(addr, 2, 0) @[SerialAdapter.scala 178:36]
    node byteAddr = mux(pow2size, _byteAddr_T, UInt<3>("h0")) @[SerialAdapter.scala 178:21]
    node put_acquire_address = shl(beatAddr, 3) @[SerialAdapter.scala 181:19]
    node put_acquire_data = cat(body_1, body_0) @[SerialAdapter.scala 182:10]
    node get_acquire_address = cat(beatAddr, byteAddr) @[Cat.scala 31:58]
    node _get_acquire_a_mask_sizeOH_T = pad(rsize, 3) @[Misc.scala 201:34]
    node get_acquire_a_mask_sizeOH_shiftAmount = bits(_get_acquire_a_mask_sizeOH_T, 1, 0) @[OneHot.scala 63:49]
    node _get_acquire_a_mask_sizeOH_T_1 = dshl(UInt<1>("h1"), get_acquire_a_mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _get_acquire_a_mask_sizeOH_T_2 = bits(_get_acquire_a_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node get_acquire_a_mask_sizeOH = or(_get_acquire_a_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _get_acquire_a_mask_T = geq(rsize, UInt<2>("h3")) @[Misc.scala 205:21]
    node get_acquire_a_mask_size = bits(get_acquire_a_mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node get_acquire_a_mask_bit = bits(get_acquire_address, 2, 2) @[Misc.scala 209:26]
    node get_acquire_a_mask_nbit = not(get_acquire_a_mask_bit) @[Misc.scala 210:20]
    node _get_acquire_a_mask_acc_T = and(get_acquire_a_mask_size, get_acquire_a_mask_nbit) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc = or(_get_acquire_a_mask_T, _get_acquire_a_mask_acc_T) @[Misc.scala 214:29]
    node _get_acquire_a_mask_acc_T_1 = and(get_acquire_a_mask_size, get_acquire_a_mask_bit) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_1 = or(_get_acquire_a_mask_T, _get_acquire_a_mask_acc_T_1) @[Misc.scala 214:29]
    node get_acquire_a_mask_size_1 = bits(get_acquire_a_mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node get_acquire_a_mask_bit_1 = bits(get_acquire_address, 1, 1) @[Misc.scala 209:26]
    node get_acquire_a_mask_nbit_1 = not(get_acquire_a_mask_bit_1) @[Misc.scala 210:20]
    node get_acquire_a_mask_eq_2 = and(get_acquire_a_mask_nbit, get_acquire_a_mask_nbit_1) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_2 = and(get_acquire_a_mask_size_1, get_acquire_a_mask_eq_2) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_2 = or(get_acquire_a_mask_acc, _get_acquire_a_mask_acc_T_2) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_3 = and(get_acquire_a_mask_nbit, get_acquire_a_mask_bit_1) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_3 = and(get_acquire_a_mask_size_1, get_acquire_a_mask_eq_3) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_3 = or(get_acquire_a_mask_acc, _get_acquire_a_mask_acc_T_3) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_4 = and(get_acquire_a_mask_bit, get_acquire_a_mask_nbit_1) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_4 = and(get_acquire_a_mask_size_1, get_acquire_a_mask_eq_4) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_4 = or(get_acquire_a_mask_acc_1, _get_acquire_a_mask_acc_T_4) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_5 = and(get_acquire_a_mask_bit, get_acquire_a_mask_bit_1) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_5 = and(get_acquire_a_mask_size_1, get_acquire_a_mask_eq_5) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_5 = or(get_acquire_a_mask_acc_1, _get_acquire_a_mask_acc_T_5) @[Misc.scala 214:29]
    node get_acquire_a_mask_size_2 = bits(get_acquire_a_mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node get_acquire_a_mask_bit_2 = bits(get_acquire_address, 0, 0) @[Misc.scala 209:26]
    node get_acquire_a_mask_nbit_2 = not(get_acquire_a_mask_bit_2) @[Misc.scala 210:20]
    node get_acquire_a_mask_eq_6 = and(get_acquire_a_mask_eq_2, get_acquire_a_mask_nbit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_6 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_6) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_6 = or(get_acquire_a_mask_acc_2, _get_acquire_a_mask_acc_T_6) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_7 = and(get_acquire_a_mask_eq_2, get_acquire_a_mask_bit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_7 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_7) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_7 = or(get_acquire_a_mask_acc_2, _get_acquire_a_mask_acc_T_7) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_8 = and(get_acquire_a_mask_eq_3, get_acquire_a_mask_nbit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_8 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_8) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_8 = or(get_acquire_a_mask_acc_3, _get_acquire_a_mask_acc_T_8) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_9 = and(get_acquire_a_mask_eq_3, get_acquire_a_mask_bit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_9 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_9) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_9 = or(get_acquire_a_mask_acc_3, _get_acquire_a_mask_acc_T_9) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_10 = and(get_acquire_a_mask_eq_4, get_acquire_a_mask_nbit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_10 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_10) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_10 = or(get_acquire_a_mask_acc_4, _get_acquire_a_mask_acc_T_10) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_11 = and(get_acquire_a_mask_eq_4, get_acquire_a_mask_bit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_11 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_11) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_11 = or(get_acquire_a_mask_acc_4, _get_acquire_a_mask_acc_T_11) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_12 = and(get_acquire_a_mask_eq_5, get_acquire_a_mask_nbit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_12 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_12) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_12 = or(get_acquire_a_mask_acc_5, _get_acquire_a_mask_acc_T_12) @[Misc.scala 214:29]
    node get_acquire_a_mask_eq_13 = and(get_acquire_a_mask_eq_5, get_acquire_a_mask_bit_2) @[Misc.scala 213:27]
    node _get_acquire_a_mask_acc_T_13 = and(get_acquire_a_mask_size_2, get_acquire_a_mask_eq_13) @[Misc.scala 214:38]
    node get_acquire_a_mask_acc_13 = or(get_acquire_a_mask_acc_5, _get_acquire_a_mask_acc_T_13) @[Misc.scala 214:29]
    node get_acquire_a_mask_lo_lo = cat(get_acquire_a_mask_acc_7, get_acquire_a_mask_acc_6) @[Cat.scala 31:58]
    node get_acquire_a_mask_lo_hi = cat(get_acquire_a_mask_acc_9, get_acquire_a_mask_acc_8) @[Cat.scala 31:58]
    node get_acquire_a_mask_lo = cat(get_acquire_a_mask_lo_hi, get_acquire_a_mask_lo_lo) @[Cat.scala 31:58]
    node get_acquire_a_mask_hi_lo = cat(get_acquire_a_mask_acc_11, get_acquire_a_mask_acc_10) @[Cat.scala 31:58]
    node get_acquire_a_mask_hi_hi = cat(get_acquire_a_mask_acc_13, get_acquire_a_mask_acc_12) @[Cat.scala 31:58]
    node get_acquire_a_mask_hi = cat(get_acquire_a_mask_hi_hi, get_acquire_a_mask_hi_lo) @[Cat.scala 31:58]
    node get_acquire_mask = cat(get_acquire_a_mask_hi, get_acquire_a_mask_lo) @[Cat.scala 31:58]
    node _bundleOut_0_a_valid_T = eq(state, UInt<4>("h7")) @[package.scala 15:47]
    node _bundleOut_0_a_valid_T_1 = eq(state, UInt<4>("h3")) @[package.scala 15:47]
    node get_acquire_size = pad(rsize, 4) @[Edges.scala 447:17 450:15]
    node _bundleOut_0_d_ready_T = eq(state, UInt<4>("h8")) @[package.scala 15:47]
    node _bundleOut_0_d_ready_T_1 = eq(state, UInt<4>("h4")) @[package.scala 15:47]
    node _T_1 = and(_io_serial_in_ready_T, io_serial_in_valid) @[SerialAdapter.scala 202:25]
    node _GEN_3 = mux(_T_1, UInt<1>("h0"), idx) @[SerialAdapter.scala 155:16 202:48 204:9]
    node _GEN_4 = mux(_T_1, UInt<64>("h0"), addr) @[SerialAdapter.scala 202:48 205:10 151:17]
    node _GEN_5 = mux(_T_1, UInt<64>("h0"), len) @[SerialAdapter.scala 152:16 202:48 206:9]
    node _GEN_6 = mux(_T_1, UInt<4>("h1"), state) @[SerialAdapter.scala 202:48 207:11 161:22]
    node _T_3 = and(_io_serial_in_ready_T_1, io_serial_in_valid) @[SerialAdapter.scala 210:26]
    node _addr_T_1 = cat(idx, UInt<5>("h0")) @[Cat.scala 31:58]
    node _addr_T_2 = dshl(io_serial_in_bits, _addr_T_1) @[SerialAdapter.scala 196:12]
    node _GEN_59 = pad(addr, 95) @[SerialAdapter.scala 211:18]
    node _addr_T_3 = or(_GEN_59, _addr_T_2) @[SerialAdapter.scala 211:18]
    node _idx_T = add(idx, UInt<1>("h1")) @[SerialAdapter.scala 212:16]
    node _idx_T_1 = tail(_idx_T, 1) @[SerialAdapter.scala 212:16]
    node _GEN_7 = mux(idx, UInt<1>("h0"), _idx_T_1) @[SerialAdapter.scala 213:43 214:11 212:9]
    node _GEN_8 = mux(idx, UInt<4>("h2"), _GEN_6) @[SerialAdapter.scala 213:43 215:13]
    node _GEN_9 = mux(_T_3, _addr_T_3, pad(_GEN_4, 95)) @[SerialAdapter.scala 210:49 211:10]
    node _GEN_10 = mux(_T_3, _GEN_7, _GEN_3) @[SerialAdapter.scala 210:49]
    node _GEN_11 = mux(_T_3, _GEN_8, _GEN_6) @[SerialAdapter.scala 210:49]
    node _T_6 = and(_io_serial_in_ready_T_2, io_serial_in_valid) @[SerialAdapter.scala 219:25]
    node _GEN_60 = pad(len, 95) @[SerialAdapter.scala 220:16]
    node _len_T_3 = or(_GEN_60, _addr_T_2) @[SerialAdapter.scala 220:16]
    node _idx_T_4 = bits(addr, 2, 2) @[SerialAdapter.scala 200:33]
    node _T_8 = eq(cmd, UInt<32>("h1")) @[SerialAdapter.scala 224:17]
    node _T_9 = eq(cmd, UInt<32>("h0")) @[SerialAdapter.scala 227:24]
    node _T_11 = not(reset) @[SerialAdapter.scala 230:15]
    node _GEN_12 = mux(_T_9, UInt<4>("h3"), _GEN_11) @[SerialAdapter.scala 227:38 228:15]
    node _GEN_13 = mux(_T_8, UInt<2>("h0"), bodyValid) @[SerialAdapter.scala 224:32 225:19 154:22]
    node _GEN_14 = mux(_T_8, UInt<4>("h6"), _GEN_12) @[SerialAdapter.scala 224:32 226:15]
    node _GEN_15 = mux(idx, _idx_T_4, _idx_T_1) @[SerialAdapter.scala 222:43 223:11 221:9]
    node _GEN_16 = mux(idx, _GEN_13, bodyValid) @[SerialAdapter.scala 154:22 222:43]
    node _GEN_17 = mux(idx, _GEN_14, _GEN_11) @[SerialAdapter.scala 222:43]
    node _GEN_18 = mux(_T_6, _len_T_3, pad(_GEN_5, 95)) @[SerialAdapter.scala 219:48 220:9]
    node _GEN_19 = mux(_T_6, _GEN_15, _GEN_10) @[SerialAdapter.scala 219:48]
    node _GEN_20 = mux(_T_6, _GEN_16, bodyValid) @[SerialAdapter.scala 154:22 219:48]
    node _GEN_21 = mux(_T_6, _GEN_17, _GEN_11) @[SerialAdapter.scala 219:48]
    node _T_14 = and(_bundleOut_0_a_valid_T_1, auto_out_a_ready) @[SerialAdapter.scala 235:30]
    node _GEN_22 = mux(_T_14, UInt<4>("h4"), _GEN_21) @[SerialAdapter.scala 235:46 236:11]
    node _T_16 = and(_bundleOut_0_d_ready_T_1, auto_out_d_valid) @[SerialAdapter.scala 239:31]
    node _T_17 = bits(auto_out_d_bits_data, 31, 0) @[SerialAdapter.scala 240:37]
    node _T_18 = bits(auto_out_d_bits_data, 63, 32) @[SerialAdapter.scala 240:37]
    node _GEN_23 = mux(_T_16, _T_17, body_0) @[SerialAdapter.scala 239:47 240:10 153:17]
    node _GEN_24 = mux(_T_16, _T_18, body_1) @[SerialAdapter.scala 239:47 240:10 153:17]
    node _GEN_25 = mux(_T_16, _idx_T_4, _GEN_19) @[SerialAdapter.scala 239:47 241:9]
    node _GEN_26 = mux(_T_16, pad(nextAddr, 95), _GEN_9) @[SerialAdapter.scala 239:47 242:10]
    node _GEN_27 = mux(_T_16, UInt<4>("h5"), _GEN_22) @[SerialAdapter.scala 239:47 243:11]
    node _T_20 = and(_io_serial_out_valid_T, io_serial_out_ready) @[SerialAdapter.scala 246:31]
    node _len_T_4 = sub(len, UInt<64>("h1")) @[SerialAdapter.scala 248:16]
    node _len_T_5 = tail(_len_T_4, 1) @[SerialAdapter.scala 248:16]
    node _T_21 = eq(len, UInt<64>("h0")) @[SerialAdapter.scala 249:15]
    node _GEN_28 = mux(idx, UInt<4>("h3"), _GEN_27) @[SerialAdapter.scala 250:{48,56}]
    node _GEN_29 = mux(_T_21, UInt<4>("h0"), _GEN_28) @[SerialAdapter.scala 249:{24,32}]
    node _GEN_30 = mux(_T_20, _idx_T_1, _GEN_25) @[SerialAdapter.scala 246:55 247:9]
    node _GEN_31 = mux(_T_20, pad(_len_T_5, 95), _GEN_18) @[SerialAdapter.scala 246:55 248:9]
    node _GEN_32 = mux(_T_20, _GEN_29, _GEN_27) @[SerialAdapter.scala 246:55]
    node _T_24 = and(_io_serial_in_ready_T_3, io_serial_in_valid) @[SerialAdapter.scala 253:32]
    node _GEN_33 = mux(not(idx), io_serial_in_bits, _GEN_23) @[SerialAdapter.scala 254:{15,15}]
    node _GEN_34 = mux(idx, io_serial_in_bits, _GEN_24) @[SerialAdapter.scala 254:{15,15}]
    node _bodyValid_T = dshl(UInt<1>("h1"), idx) @[OneHot.scala 57:35]
    node _bodyValid_T_1 = or(bodyValid, _bodyValid_T) @[SerialAdapter.scala 255:28]
    node _T_27 = or(idx, _T_21) @[SerialAdapter.scala 256:42]
    node _GEN_35 = mux(_T_27, UInt<4>("h7"), _GEN_32) @[SerialAdapter.scala 256:58 257:13]
    node _GEN_36 = mux(_T_27, _GEN_30, _idx_T_1) @[SerialAdapter.scala 256:58 259:11]
    node _GEN_37 = mux(_T_27, _GEN_31, pad(_len_T_5, 95)) @[SerialAdapter.scala 256:58 260:11]
    node _GEN_40 = mux(_T_24, _bodyValid_T_1, _GEN_20) @[SerialAdapter.scala 253:55 255:15]
    node _GEN_41 = mux(_T_24, _GEN_35, _GEN_32) @[SerialAdapter.scala 253:55]
    node _GEN_42 = mux(_T_24, _GEN_36, _GEN_30) @[SerialAdapter.scala 253:55]
    node _GEN_43 = mux(_T_24, _GEN_37, _GEN_31) @[SerialAdapter.scala 253:55]
    node _T_29 = and(_bundleOut_0_a_valid_T, auto_out_a_ready) @[SerialAdapter.scala 264:32]
    node _GEN_44 = mux(_T_29, UInt<4>("h8"), _GEN_41) @[SerialAdapter.scala 264:48 265:11]
    node _T_31 = and(_bundleOut_0_d_ready_T, auto_out_d_valid) @[SerialAdapter.scala 268:31]
    node _GEN_45 = mux(_T_21, UInt<4>("h0"), UInt<4>("h6")) @[SerialAdapter.scala 269:24 270:13 276:13]
    node _GEN_46 = mux(_T_21, _GEN_26, pad(nextAddr, 95)) @[SerialAdapter.scala 269:24 272:12]
    node _GEN_47 = mux(_T_21, _GEN_43, pad(_len_T_5, 95)) @[SerialAdapter.scala 269:24 273:11]
    node _GEN_48 = and(_T_21, _GEN_42) @[SerialAdapter.scala 269:24 274:11]
    node _GEN_49 = mux(_T_21, _GEN_40, UInt<2>("h0")) @[SerialAdapter.scala 269:24 275:17]
    node _GEN_50 = mux(_T_31, _GEN_45, _GEN_44) @[SerialAdapter.scala 268:47]
    node _GEN_51 = mux(_T_31, _GEN_46, _GEN_26) @[SerialAdapter.scala 268:47]
    node _GEN_52 = mux(_T_31, _GEN_47, _GEN_43) @[SerialAdapter.scala 268:47]
    auto_out_a_valid <= or(_bundleOut_0_a_valid_T, _bundleOut_0_a_valid_T_1) @[package.scala 72:59]
    auto_out_a_bits_opcode <= mux(_bundleOut_0_a_valid_T, UInt<3>("h1"), UInt<3>("h4")) @[SerialAdapter.scala 188:20]
    auto_out_a_bits_size <= mux(_bundleOut_0_a_valid_T, UInt<4>("h3"), get_acquire_size) @[SerialAdapter.scala 188:20]
    auto_out_a_bits_address <= mux(_bundleOut_0_a_valid_T, put_acquire_address, get_acquire_address) @[SerialAdapter.scala 188:20]
    auto_out_a_bits_mask <= mux(_bundleOut_0_a_valid_T, wmask, get_acquire_mask) @[SerialAdapter.scala 188:20]
    auto_out_a_bits_data <= mux(_bundleOut_0_a_valid_T, put_acquire_data, UInt<64>("h0")) @[SerialAdapter.scala 188:20]
    auto_out_d_ready <= or(_bundleOut_0_d_ready_T, _bundleOut_0_d_ready_T_1) @[package.scala 72:59]
    io_serial_in_ready <= or(_io_serial_in_ready_T_5, _io_serial_in_ready_T_3) @[package.scala 72:59]
    io_serial_out_valid <= eq(state, UInt<4>("h5")) @[SerialAdapter.scala 164:32]
    io_serial_out_bits <= mux(idx, body_1, body_0) @[SerialAdapter.scala 165:{22,22}]
    cmd <= mux(_T_1, io_serial_in_bits, cmd) @[SerialAdapter.scala 150:16 202:48 203:9]
    addr <= bits(_GEN_51, 63, 0)
    len <= bits(_GEN_52, 63, 0)
    body_0 <= mux(_T_24, _GEN_33, _GEN_23) @[SerialAdapter.scala 253:55]
    body_1 <= mux(_T_24, _GEN_34, _GEN_24) @[SerialAdapter.scala 253:55]
    bodyValid <= mux(_T_31, _GEN_49, _GEN_40) @[SerialAdapter.scala 268:47]
    idx <= mux(_T_31, _GEN_48, _GEN_42) @[SerialAdapter.scala 268:47]
    state <= mux(reset, UInt<4>("h0"), _GEN_50) @[SerialAdapter.scala 161:{22,22}]
    node _GEN_61 = and(_T_6, idx) @[SerialAdapter.scala 230:15]
    node _GEN_62 = not(_T_8) @[SerialAdapter.scala 230:15]
    node _GEN_63 = and(_GEN_61, _GEN_62) @[SerialAdapter.scala 230:15]
    node _GEN_64 = not(_T_9) @[SerialAdapter.scala 230:15]
    node _GEN_65 = and(_GEN_63, _GEN_64) @[SerialAdapter.scala 230:15]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_65, _T_11)), 1) : assert @[SerialAdapter.scala 230:15]
    printf(clock, and(_GEN_65, _T_11), "Assertion failed: Bad TSI command\n    at SerialAdapter.scala:230 assert(false.B, \"Bad TSI command\")\n") : printf @[SerialAdapter.scala 230:15]

  module TLMonitor_63_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<4>
    input io_in_a_bits_source : UInt<1>
    input io_in_a_bits_address : UInt<32>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_param : UInt<2>
    input io_in_d_bits_size : UInt<4>
    input io_in_d_bits_source : UInt<1>
    input io_in_d_bits_sink : UInt<4>
    input io_in_d_bits_denied : UInt<1>
    input io_in_d_bits_corrupt : UInt<1>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _source_ok_T = not(io_in_a_bits_source) @[Parameters.scala 46:9]
    node _is_aligned_mask_T_1 = dshl(UInt<12>("hfff"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 11, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 32) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<32>("h0")) @[Edges.scala 20:24]
    node mask_sizeOH_shiftAmount = bits(io_in_a_bits_size, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<4>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_5 = not(_source_ok_T) @[Monitor.scala 63:7]
    node _T_7 = cvt(io_in_a_bits_address) @[Parameters.scala 137:49]
    node _T_15 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_17 = leq(io_in_a_bits_size, UInt<4>("hc")) @[Parameters.scala 92:42]
    node _T_20 = and(_T_17, _source_ok_T) @[Parameters.scala 1160:30]
    node _T_25 = and(_T_7, SInt<33>("h-5000")) @[Parameters.scala 137:52]
    node _T_26 = asSInt(_T_25) @[Parameters.scala 137:52]
    node _T_27 = eq(_T_26, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_28 = xor(io_in_a_bits_address, UInt<32>("h3000")) @[Parameters.scala 137:31]
    node _T_29 = cvt(_T_28) @[Parameters.scala 137:49]
    node _T_30 = and(_T_29, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_31 = asSInt(_T_30) @[Parameters.scala 137:52]
    node _T_32 = eq(_T_31, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_33 = xor(io_in_a_bits_address, UInt<32>("h10000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_38 = xor(io_in_a_bits_address, UInt<32>("h100000")) @[Parameters.scala 137:31]
    node _T_39 = cvt(_T_38) @[Parameters.scala 137:49]
    node _T_40 = and(_T_39, SInt<33>("h-11000")) @[Parameters.scala 137:52]
    node _T_41 = asSInt(_T_40) @[Parameters.scala 137:52]
    node _T_42 = eq(_T_41, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_43 = xor(io_in_a_bits_address, UInt<32>("h2000000")) @[Parameters.scala 137:31]
    node _T_44 = cvt(_T_43) @[Parameters.scala 137:49]
    node _T_45 = and(_T_44, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_46 = asSInt(_T_45) @[Parameters.scala 137:52]
    node _T_47 = eq(_T_46, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_48 = xor(io_in_a_bits_address, UInt<32>("h2010000")) @[Parameters.scala 137:31]
    node _T_49 = cvt(_T_48) @[Parameters.scala 137:49]
    node _T_50 = and(_T_49, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_51 = asSInt(_T_50) @[Parameters.scala 137:52]
    node _T_52 = eq(_T_51, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_53 = xor(io_in_a_bits_address, UInt<32>("hc000000")) @[Parameters.scala 137:31]
    node _T_54 = cvt(_T_53) @[Parameters.scala 137:49]
    node _T_55 = and(_T_54, SInt<33>("h-4000000")) @[Parameters.scala 137:52]
    node _T_56 = asSInt(_T_55) @[Parameters.scala 137:52]
    node _T_57 = eq(_T_56, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_58 = xor(io_in_a_bits_address, UInt<32>("h54000000")) @[Parameters.scala 137:31]
    node _T_59 = cvt(_T_58) @[Parameters.scala 137:49]
    node _T_60 = and(_T_59, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_61 = asSInt(_T_60) @[Parameters.scala 137:52]
    node _T_62 = eq(_T_61, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_63 = or(_T_27, _T_32) @[Parameters.scala 671:42]
    node _T_71 = eq(UInt<4>("h6"), io_in_a_bits_size) @[Parameters.scala 91:48]
    node _T_73 = xor(io_in_a_bits_address, UInt<32>("h20000")) @[Parameters.scala 137:31]
    node _T_74 = cvt(_T_73) @[Parameters.scala 137:49]
    node _T_75 = and(_T_74, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_76 = asSInt(_T_75) @[Parameters.scala 137:52]
    node _T_77 = eq(_T_76, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_78 = xor(io_in_a_bits_address, UInt<32>("h10000000")) @[Parameters.scala 137:31]
    node _T_79 = cvt(_T_78) @[Parameters.scala 137:49]
    node _T_80 = and(_T_79, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_81 = asSInt(_T_80) @[Parameters.scala 137:52]
    node _T_82 = eq(_T_81, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_83 = xor(io_in_a_bits_address, UInt<32>("h80000000")) @[Parameters.scala 137:31]
    node _T_84 = cvt(_T_83) @[Parameters.scala 137:49]
    node _T_85 = and(_T_84, SInt<33>("h-10000000")) @[Parameters.scala 137:52]
    node _T_86 = asSInt(_T_85) @[Parameters.scala 137:52]
    node _T_87 = eq(_T_86, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_88 = or(_T_77, _T_82) @[Parameters.scala 671:42]
    node _T_89 = or(_T_88, _T_87) @[Parameters.scala 671:42]
    node _T_90 = and(_T_71, _T_89) @[Parameters.scala 670:56]
    node _T_93 = and(_T_20, _T_90) @[Monitor.scala 82:72]
    node _T_96 = not(_T_93) @[Monitor.scala 42:11]
    node _T_178 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_181 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_182 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_185 = not(_T_182) @[Monitor.scala 42:11]
    node _T_186 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_187 = eq(_T_186, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_191 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_194 = not(_T_191) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_366 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_369 = not(_T_366) @[Monitor.scala 42:11]
    node _T_379 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_388 = not(_T_20) @[Monitor.scala 42:11]
    node _T_398 = and(_T_17, _T_32) @[Parameters.scala 670:56]
    node _T_400 = leq(io_in_a_bits_size, UInt<4>("h6")) @[Parameters.scala 92:42]
    node _T_453 = or(_T_27, _T_37) @[Parameters.scala 671:42]
    node _T_454 = or(_T_453, _T_77) @[Parameters.scala 671:42]
    node _T_455 = or(_T_454, _T_42) @[Parameters.scala 671:42]
    node _T_456 = or(_T_455, _T_47) @[Parameters.scala 671:42]
    node _T_457 = or(_T_456, _T_52) @[Parameters.scala 671:42]
    node _T_458 = or(_T_457, _T_57) @[Parameters.scala 671:42]
    node _T_459 = or(_T_458, _T_82) @[Parameters.scala 671:42]
    node _T_460 = or(_T_459, _T_62) @[Parameters.scala 671:42]
    node _T_461 = or(_T_460, _T_87) @[Parameters.scala 671:42]
    node _T_462 = and(_T_400, _T_461) @[Parameters.scala 670:56]
    node _T_464 = or(_T_398, _T_462) @[Parameters.scala 672:30]
    node _T_467 = not(_T_464) @[Monitor.scala 42:11]
    node _T_474 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_477 = not(_T_474) @[Monitor.scala 42:11]
    node _T_478 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_481 = not(_T_478) @[Monitor.scala 42:11]
    node _T_486 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_547 = or(_T_27, _T_42) @[Parameters.scala 671:42]
    node _T_548 = or(_T_547, _T_47) @[Parameters.scala 671:42]
    node _T_549 = or(_T_548, _T_52) @[Parameters.scala 671:42]
    node _T_550 = or(_T_549, _T_57) @[Parameters.scala 671:42]
    node _T_551 = or(_T_550, _T_82) @[Parameters.scala 671:42]
    node _T_552 = or(_T_551, _T_62) @[Parameters.scala 671:42]
    node _T_553 = or(_T_552, _T_87) @[Parameters.scala 671:42]
    node _T_554 = and(_T_400, _T_553) @[Parameters.scala 670:56]
    node _T_569 = or(_T_398, _T_554) @[Parameters.scala 672:30]
    node _T_571 = and(_T_20, _T_569) @[Monitor.scala 115:71]
    node _T_574 = not(_T_571) @[Monitor.scala 42:11]
    node _T_589 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_688 = not(mask) @[Monitor.scala 127:33]
    node _T_689 = and(io_in_a_bits_mask, _T_688) @[Monitor.scala 127:31]
    node _T_690 = eq(_T_689, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_693 = not(_T_690) @[Monitor.scala 42:11]
    node _T_694 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_702 = leq(io_in_a_bits_size, UInt<4>("h3")) @[Parameters.scala 92:42]
    node _T_741 = or(_T_63, _T_42) @[Parameters.scala 671:42]
    node _T_742 = or(_T_741, _T_47) @[Parameters.scala 671:42]
    node _T_743 = or(_T_742, _T_52) @[Parameters.scala 671:42]
    node _T_744 = or(_T_743, _T_57) @[Parameters.scala 671:42]
    node _T_745 = or(_T_744, _T_62) @[Parameters.scala 671:42]
    node _T_746 = and(_T_702, _T_745) @[Parameters.scala 670:56]
    node _T_761 = leq(io_in_a_bits_size, UInt<4>("h4")) @[Parameters.scala 92:42]
    node _T_774 = or(_T_82, _T_87) @[Parameters.scala 671:42]
    node _T_775 = and(_T_761, _T_774) @[Parameters.scala 670:56]
    node _T_778 = or(_T_746, _T_775) @[Parameters.scala 672:30]
    node _T_779 = and(_T_20, _T_778) @[Monitor.scala 131:74]
    node _T_782 = not(_T_779) @[Monitor.scala 42:11]
    node _T_789 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_792 = not(_T_789) @[Monitor.scala 42:11]
    node _T_797 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_892 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_895 = not(_T_892) @[Monitor.scala 42:11]
    node _T_900 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_981 = and(_T_400, _T_89) @[Parameters.scala 670:56]
    node _T_984 = or(_T_398, _T_981) @[Parameters.scala 672:30]
    node _T_985 = and(_T_20, _T_984) @[Monitor.scala 147:68]
    node _T_988 = not(_T_985) @[Monitor.scala 42:11]
    node _T_995 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_998 = not(_T_995) @[Monitor.scala 42:11]
    node _T_1007 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_1010 = not(_T_1007) @[Monitor.scala 49:11]
    node _source_ok_T_1 = not(io_in_d_bits_source) @[Parameters.scala 46:9]
    node _T_1011 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_1014 = not(_source_ok_T_1) @[Monitor.scala 49:11]
    node _T_1015 = geq(io_in_d_bits_size, UInt<4>("h3")) @[Monitor.scala 312:27]
    node _T_1018 = not(_T_1015) @[Monitor.scala 49:11]
    node _T_1019 = eq(io_in_d_bits_param, UInt<2>("h0")) @[Monitor.scala 313:28]
    node _T_1022 = not(_T_1019) @[Monitor.scala 49:11]
    node _T_1023 = not(io_in_d_bits_corrupt) @[Monitor.scala 314:15]
    node _T_1026 = not(_T_1023) @[Monitor.scala 49:11]
    node _T_1027 = not(io_in_d_bits_denied) @[Monitor.scala 315:15]
    node _T_1030 = not(_T_1027) @[Monitor.scala 49:11]
    node _T_1031 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_1042 = leq(io_in_d_bits_param, UInt<2>("h2")) @[Bundles.scala 102:26]
    node _T_1045 = not(_T_1042) @[Monitor.scala 49:11]
    node _T_1046 = neq(io_in_d_bits_param, UInt<2>("h2")) @[Monitor.scala 323:28]
    node _T_1049 = not(_T_1046) @[Monitor.scala 49:11]
    node _T_1059 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_1079 = or(_T_1027, io_in_d_bits_corrupt) @[Monitor.scala 334:30]
    node _T_1082 = not(_T_1079) @[Monitor.scala 49:11]
    node _T_1088 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_1105 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_1123 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node _a_first_T = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    node a_first_beats1_decode = shr(is_aligned_mask, 3) @[Edges.scala 219:59]
    node _a_first_beats1_opdata_T = bits(io_in_a_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node a_first_beats1_opdata = not(_a_first_beats1_opdata_T) @[Edges.scala 91:28]
    node a_first_beats1 = mux(a_first_beats1_opdata, a_first_beats1_decode, UInt<9>("h0")) @[Edges.scala 220:14]
    reg a_first_counter : UInt<9>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<9>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = eq(a_first_counter, UInt<9>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, a_first_beats1, a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(_a_first_T, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<4>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<1>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<32>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_1152 = not(a_first) @[Monitor.scala 389:22]
    node _T_1153 = and(io_in_a_valid, _T_1152) @[Monitor.scala 389:19]
    node _T_1154 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_1157 = not(_T_1154) @[Monitor.scala 42:11]
    node _T_1158 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_1161 = not(_T_1158) @[Monitor.scala 42:11]
    node _T_1162 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_1165 = not(_T_1162) @[Monitor.scala 42:11]
    node _T_1166 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_1169 = not(_T_1166) @[Monitor.scala 42:11]
    node _T_1170 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_1173 = not(_T_1170) @[Monitor.scala 42:11]
    node _T_1175 = and(_a_first_T, a_first) @[Monitor.scala 396:20]
    node _d_first_T = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    node _d_first_beats1_decode_T_1 = dshl(UInt<12>("hfff"), io_in_d_bits_size) @[package.scala 234:77]
    node _d_first_beats1_decode_T_2 = bits(_d_first_beats1_decode_T_1, 11, 0) @[package.scala 234:82]
    node _d_first_beats1_decode_T_3 = not(_d_first_beats1_decode_T_2) @[package.scala 234:46]
    node d_first_beats1_decode = shr(_d_first_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    node d_first_beats1_opdata = bits(io_in_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node d_first_beats1 = mux(d_first_beats1_opdata, d_first_beats1_decode, UInt<9>("h0")) @[Edges.scala 220:14]
    reg d_first_counter : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = eq(d_first_counter, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, d_first_beats1, d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(_d_first_T, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg param_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), param_1) @[Monitor.scala 536:22]
    reg size_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    reg sink : UInt<4>, clock with :
      reset => (UInt<1>("h0"), sink) @[Monitor.scala 539:22]
    reg denied : UInt<1>, clock with :
      reset => (UInt<1>("h0"), denied) @[Monitor.scala 540:22]
    node _T_1176 = not(d_first) @[Monitor.scala 541:22]
    node _T_1177 = and(io_in_d_valid, _T_1176) @[Monitor.scala 541:19]
    node _T_1178 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_1181 = not(_T_1178) @[Monitor.scala 49:11]
    node _T_1182 = eq(io_in_d_bits_param, param_1) @[Monitor.scala 543:29]
    node _T_1185 = not(_T_1182) @[Monitor.scala 49:11]
    node _T_1186 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_1189 = not(_T_1186) @[Monitor.scala 49:11]
    node _T_1190 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_1193 = not(_T_1190) @[Monitor.scala 49:11]
    node _T_1194 = eq(io_in_d_bits_sink, sink) @[Monitor.scala 546:29]
    node _T_1197 = not(_T_1194) @[Monitor.scala 49:11]
    node _T_1198 = eq(io_in_d_bits_denied, denied) @[Monitor.scala 547:29]
    node _T_1201 = not(_T_1198) @[Monitor.scala 49:11]
    node _T_1203 = and(_d_first_T, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<1>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<4>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<8>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<9>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = eq(a_first_counter_1, UInt<9>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, a_first_beats1, a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(_a_first_T, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = eq(d_first_counter_1, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, d_first_beats1, d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(_d_first_T, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 4) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_1, 16) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_GEN_73, _a_opcode_lookup_T_5) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 16) @[Monitor.scala 634:152]
    node _a_size_lookup_T = shl(io_in_d_bits_source, 3) @[Monitor.scala 638:65]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_size_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_4 = sub(UInt<16>("h100"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_size_lookup_T_5 = tail(_a_size_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_75 = pad(_a_size_lookup_T_1, 16) @[Monitor.scala 638:91]
    node _a_size_lookup_T_6 = and(_GEN_75, _a_size_lookup_T_5) @[Monitor.scala 638:91]
    node _GEN_76 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_76, 16) @[Monitor.scala 638:144]
    node _T_1204 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node _GEN_15 = mux(_T_1204, _a_set_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 648:71 649:22]
    node _T_1207 = and(_a_first_T, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<5>("h1")) @[Monitor.scala 655:59]
    node _GEN_77 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_77, 4) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_1207, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node _a_sizes_set_T = shl(io_in_a_bits_source, 3) @[Monitor.scala 657:77]
    node a_sizes_set_interm = mux(_T_1207, _a_sizes_set_interm_T_1, UInt<5>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_sizes_set_T) @[Monitor.scala 657:52]
    node _T_1209 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_1211 = not(_T_1209) @[Monitor.scala 658:17]
    node _T_1214 = not(_T_1211) @[Monitor.scala 42:11]
    node _GEN_16 = mux(_T_1207, _a_set_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_1207, _a_opcodes_set_T_1, UInt<19>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_1207, _a_sizes_set_T_1, UInt<20>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_1215 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_1217 = not(_T_1011) @[Monitor.scala 671:74]
    node _T_1218 = and(_T_1215, _T_1217) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node _GEN_21 = mux(_T_1218, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 671:90 672:22]
    node _T_1220 = and(_d_first_T, d_first_1) @[Monitor.scala 675:27]
    node _T_1223 = and(_T_1220, _T_1217) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node _d_sizes_clr_T_5 = dshl(_a_size_lookup_T_5, _a_size_lookup_T) @[Monitor.scala 678:74]
    node _GEN_22 = mux(_T_1223, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_1223, _d_opcodes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 675:91 677:21]
    node _GEN_24 = mux(_T_1223, _d_sizes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 675:91 678:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_1204, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_1228 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_1230 = or(_T_1228, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_1233 = not(_T_1230) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_1234 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_1235 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_1236 = or(_T_1234, _T_1235) @[Monitor.scala 685:77]
    node _T_1239 = not(_T_1236) @[Monitor.scala 49:11]
    node _T_1240 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_1243 = not(_T_1240) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_1244 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_1244), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_1244), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_1244), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_1244), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_1244), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_1244), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_1245 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_1244), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_1244), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_1247 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_1248 = or(_T_1245, _T_1247) @[Monitor.scala 689:72]
    node _T_1251 = not(_T_1248) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 7, 0)
    node _GEN_79 = pad(io_in_d_bits_size, 8) @[Monitor.scala 691:36]
    node _T_1252 = eq(_GEN_79, a_size_lookup) @[Monitor.scala 691:36]
    node _T_1255 = not(_T_1252) @[Monitor.scala 49:11]
    node _T_1257 = and(_T_1215, a_first_1) @[Monitor.scala 694:36]
    node _T_1258 = and(_T_1257, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_1260 = and(_T_1258, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_1262 = and(_T_1260, _T_1217) @[Monitor.scala 694:116]
    node _T_1263 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_1264 = or(_T_1263, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_1267 = not(_T_1264) @[Monitor.scala 49:11]
    node a_set_wo_ready = bits(_GEN_15, 0, 0)
    node d_clr_wo_ready = bits(_GEN_21, 0, 0)
    node _T_1268 = neq(a_set_wo_ready, d_clr_wo_ready) @[Monitor.scala 699:29]
    node _T_1269 = orr(a_set_wo_ready) @[Monitor.scala 699:67]
    node _T_1270 = not(_T_1269) @[Monitor.scala 699:51]
    node _T_1271 = or(_T_1268, _T_1270) @[Monitor.scala 699:48]
    node _T_1274 = not(_T_1271) @[Monitor.scala 49:11]
    node a_set = bits(_GEN_16, 0, 0)
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node d_clr = bits(_GEN_22, 0, 0)
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 3, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 3, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 7, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node d_sizes_clr = bits(_GEN_24, 7, 0)
    node _inflight_sizes_T_1 = not(d_sizes_clr) @[Monitor.scala 704:56]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_sizes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_1275 = orr(inflight) @[Monitor.scala 709:26]
    node _T_1276 = not(_T_1275) @[Monitor.scala 709:16]
    node _T_1277 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_1278 = or(_T_1276, _T_1277) @[Monitor.scala 709:30]
    node _T_1279 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_1280 = or(_T_1278, _T_1279) @[Monitor.scala 709:47]
    node _T_1283 = not(_T_1280) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_1286 = or(_a_first_T, _d_first_T) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_1286, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_sizes_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = eq(d_first_counter_2, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, d_first_beats1, d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(_d_first_T, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_size_lookup_T) @[Monitor.scala 747:42]
    node _GEN_83 = pad(_c_size_lookup_T_1, 16) @[Monitor.scala 747:93]
    node _c_size_lookup_T_6 = and(_GEN_83, _a_size_lookup_T_5) @[Monitor.scala 747:93]
    node _GEN_84 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_84, 16) @[Monitor.scala 747:146]
    node _T_1304 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_1306 = and(_T_1304, _T_1011) @[Monitor.scala 779:71]
    node _GEN_66 = mux(_T_1306, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 779:89 780:22]
    node _T_1308 = and(_d_first_T, d_first_2) @[Monitor.scala 783:27]
    node _T_1310 = and(_T_1308, _T_1011) @[Monitor.scala 783:72]
    node _GEN_69 = mux(_T_1310, _d_sizes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 783:90 786:21]
    node _T_1314 = dshr(UInt<1>("h0"), io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_1319 = not(_T_1314) @[Monitor.scala 49:11]
    node _T_1320 = eq(io_in_d_bits_size, UInt<4>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 7, 0)
    node _T_1324 = eq(_GEN_79, c_size_lookup) @[Monitor.scala 795:36]
    node _T_1327 = not(_T_1324) @[Monitor.scala 49:11]
    node d_clr_wo_ready_1 = bits(_GEN_66, 0, 0)
    node d_sizes_clr_1 = bits(_GEN_69, 7, 0)
    node _inflight_sizes_T_4 = not(d_sizes_clr_1) @[Monitor.scala 811:58]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_sizes_T_4) @[Monitor.scala 811:56]
    a_first_counter <= mux(reset, UInt<9>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_1175, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_1175, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_1175, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_1175, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_1175, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<9>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_1203, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    param_1 <= mux(_T_1203, io_in_d_bits_param, param_1) @[Monitor.scala 549:32 551:15 536:22]
    size_1 <= mux(_T_1203, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_1203, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    sink <= mux(_T_1203, io_in_d_bits_sink, sink) @[Monitor.scala 549:32 554:15 539:22]
    denied <= mux(_T_1203, io_in_d_bits_denied, denied) @[Monitor.scala 549:32 555:15 540:22]
    inflight <= mux(reset, UInt<1>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<4>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<8>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<9>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<9>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_sizes_1 <= mux(reset, UInt<8>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<9>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_87 = and(io_in_a_valid, _T_15) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_93), and(_GEN_87, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    node _GEN_89 = and(_GEN_87, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_96), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_87, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_87, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_87, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_5), "Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_87, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_178), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_87, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_181), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_182), and(_GEN_87, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_185), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_87, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_190), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_191), and(_GEN_87, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_89, _T_194), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_110 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_93), and(_GEN_110, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    node _GEN_112 = and(_GEN_110, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_96), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_110, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_110, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_110, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_5), "Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_110, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_178), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_110, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_181), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_182), and(_GEN_110, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_185), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_366), and(_GEN_110, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_369), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_110, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_190), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_191), and(_GEN_110, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_194), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_136 = and(io_in_a_valid, _T_379) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_20), and(_GEN_136, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_136, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_388), "Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_464), and(_GEN_136, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_467), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_136, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_5), "Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_136, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_181), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_474), and(_GEN_136, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_477), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_136, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_481), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_191), and(_GEN_136, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_194), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_157 = and(io_in_a_valid, _T_486) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_571), and(_GEN_157, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_159 = and(_GEN_157, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_159, _T_574), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_157, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_159, _T_5), "Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_157, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_159, _T_181), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_474), and(_GEN_157, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_159, _T_477), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_157, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_159, _T_481), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_172 = and(io_in_a_valid, _T_589) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_571), and(_GEN_172, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_174 = and(_GEN_172, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_174, _T_574), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_172, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_174, _T_5), "Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_172, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_174, _T_181), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_474), and(_GEN_172, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_174, _T_477), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_690), and(_GEN_172, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_174, _T_693), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_187 = and(io_in_a_valid, _T_694) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_779), and(_GEN_187, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    node _GEN_189 = and(_GEN_187, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_189, _T_782), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_187, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_189, _T_5), "Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_187, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_189, _T_181), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_789), and(_GEN_187, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_189, _T_792), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_187, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_189, _T_481), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_202 = and(io_in_a_valid, _T_797) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_779), and(_GEN_202, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    node _GEN_204 = and(_GEN_202, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_204, _T_782), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_202, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_204, _T_5), "Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_202, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_204, _T_181), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_892), and(_GEN_202, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_204, _T_895), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_202, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_204, _T_481), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_217 = and(io_in_a_valid, _T_900) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_985), and(_GEN_217, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    node _GEN_219 = and(_GEN_217, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_988), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(_source_ok_T), and(_GEN_217, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_5), "Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_217, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_181), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_995), and(_GEN_217, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_998), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_217, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_481), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_191), and(_GEN_217, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_219, _T_194), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1007), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_235 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_235, _T_1010), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_236 = and(io_in_d_valid, _T_1011) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_236, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    node _GEN_238 = and(_GEN_236, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_238, _T_1014), "Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_236, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_238, _T_1018), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_236, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_238, _T_1022), "Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_55 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_236, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_238, _T_1026), "Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_56 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1027), and(_GEN_236, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_238, _T_1030), "Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_57 @[Monitor.scala 49:11]
    node _GEN_251 = and(io_in_d_valid, _T_1031) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_251, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    node _GEN_253 = and(_GEN_251, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_253, _T_1014), "Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_251, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_251, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_253, _T_1018), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1042), and(_GEN_251, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_253, _T_1045), "Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_61 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1046), and(_GEN_251, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_253, _T_1049), "Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_62 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_251, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_253, _T_1026), "Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_63 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_251, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    node _GEN_268 = and(io_in_d_valid, _T_1059) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_268, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    node _GEN_270 = and(_GEN_268, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_1014), "Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_268, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_268, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_1018), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1042), and(_GEN_268, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_1045), "Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_68 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1046), and(_GEN_268, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_1049), "Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_69 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1079), and(_GEN_268, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_1082), "Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_70 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_268, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    node _GEN_285 = and(io_in_d_valid, _T_1088) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_285, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    node _GEN_287 = and(_GEN_285, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_287, _T_1014), "Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_72 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_285, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_287, _T_1022), "Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_73 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_285, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_287, _T_1026), "Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_74 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_285, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    node _GEN_295 = and(io_in_d_valid, _T_1105) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_295, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    node _GEN_297 = and(_GEN_295, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_297, _T_1014), "Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_76 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_295, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_297, _T_1022), "Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_77 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1079), and(_GEN_295, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_297, _T_1082), "Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_78 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_295, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    node _GEN_305 = and(io_in_d_valid, _T_1123) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_305, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    node _GEN_307 = and(_GEN_305, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_307, _T_1014), "Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_80 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_305, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_307, _T_1022), "Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_81 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_305, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_307, _T_1026), "Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_82 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_305, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1154), and(_T_1153, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_315 = and(_T_1153, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_315, _T_1157), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1158), and(_T_1153, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_315, _T_1161), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1162), and(_T_1153, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_315, _T_1165), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1166), and(_T_1153, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_315, _T_1169), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1170), and(_T_1153, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_315, _T_1173), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1178), and(_T_1177, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_320 = and(_T_1177, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1181), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1182), and(_T_1177, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1185), "Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1186), and(_T_1177, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1189), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1190), and(_T_1177, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1193), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1194), and(_T_1177, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1197), "Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_96 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1198), and(_T_1177, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_1201), "Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1211), and(_T_1207, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_326 = and(_T_1207, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_326, _T_1214), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1230), and(_T_1218, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_327 = and(_T_1218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_1233), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_328 = and(_T_1218, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1236), and(_GEN_328, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_330 = and(_GEN_328, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_330, _T_1239), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1240), and(_GEN_328, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_330, _T_1243), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_334 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_335 = and(_T_1218, _GEN_334) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1248), and(_GEN_335, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_338 = and(_GEN_335, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_338, _T_1251), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1252), and(_GEN_335, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_338, _T_1255), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1264), and(_T_1262, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_344 = and(_T_1262, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_344, _T_1267), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1271), _T_2), 1) : assert_105 @[Monitor.scala 49:11]
    printf(clock, and(_T_2, _T_1274), "Assertion failed: 'A' and 'D' concurrent, despite minlatency 6 (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_105 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1280), _T_2), 1) : assert_106 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_1283), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_106 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1314), and(_T_1306, _T_2)), 1) : assert_108 @[Monitor.scala 49:11]
    node _GEN_345 = and(_T_1306, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_345, _T_1319), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_108 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1324), and(_T_1306, _T_2)), 1) : assert_110 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_345, _T_1327), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:25)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_110 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_113 @[Monitor.scala 42:11]

  module TLSerdesser_1_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_manager_in_a_ready : UInt<1>
    input auto_manager_in_a_valid : UInt<1>
    input auto_manager_in_a_bits_opcode : UInt<3>
    input auto_manager_in_a_bits_param : UInt<3>
    input auto_manager_in_a_bits_size : UInt<4>
    input auto_manager_in_a_bits_source : UInt<1>
    input auto_manager_in_a_bits_address : UInt<32>
    input auto_manager_in_a_bits_mask : UInt<8>
    input auto_manager_in_a_bits_data : UInt<64>
    input auto_manager_in_a_bits_corrupt : UInt<1>
    input auto_manager_in_d_ready : UInt<1>
    output auto_manager_in_d_valid : UInt<1>
    output auto_manager_in_d_bits_opcode : UInt<3>
    output auto_manager_in_d_bits_param : UInt<2>
    output auto_manager_in_d_bits_size : UInt<4>
    output auto_manager_in_d_bits_source : UInt<1>
    output auto_manager_in_d_bits_sink : UInt<4>
    output auto_manager_in_d_bits_denied : UInt<1>
    output auto_manager_in_d_bits_data : UInt<64>
    output auto_manager_in_d_bits_corrupt : UInt<1>
    input auto_client_out_a_ready : UInt<1>
    output auto_client_out_a_valid : UInt<1>
    output auto_client_out_a_bits_opcode : UInt<3>
    output auto_client_out_a_bits_param : UInt<3>
    output auto_client_out_a_bits_size : UInt<3>
    output auto_client_out_a_bits_source : UInt<4>
    output auto_client_out_a_bits_address : UInt<29>
    output auto_client_out_a_bits_mask : UInt<8>
    output auto_client_out_a_bits_data : UInt<64>
    output auto_client_out_a_bits_corrupt : UInt<1>
    output auto_client_out_d_ready : UInt<1>
    input auto_client_out_d_valid : UInt<1>
    input auto_client_out_d_bits_opcode : UInt<3>
    input auto_client_out_d_bits_param : UInt<2>
    input auto_client_out_d_bits_size : UInt<3>
    input auto_client_out_d_bits_source : UInt<4>
    input auto_client_out_d_bits_sink : UInt<1>
    input auto_client_out_d_bits_denied : UInt<1>
    input auto_client_out_d_bits_data : UInt<64>
    input auto_client_out_d_bits_corrupt : UInt<1>
    output io_ser_in_ready : UInt<1>
    input io_ser_in_valid : UInt<1>
    input io_ser_in_bits : UInt<32>
    input io_ser_out_ready : UInt<1>
    output io_ser_out_valid : UInt<1>
    output io_ser_out_bits : UInt<32>

    inst monitor of TLMonitor_63_inTestHarness @[Nodes.scala 24:25]
    inst outArb of HellaPeekingArbiter_inTestHarness @[Serdes.scala 619:24]
    inst outSer of GenericSerializer_inTestHarness @[Serdes.scala 621:24]
    inst inDes of GenericDeserializer_inTestHarness @[Serdes.scala 626:23]
    node _merged_bits_merged_union_T_1 = cat(auto_client_out_d_bits_sink, auto_client_out_d_bits_denied) @[Cat.scala 31:58]
    node merged_1_ready = outArb.io_in_1_ready @[Serdes.scala 354:22 622:18]
    node _merged_bits_last_T_1 = and(merged_1_ready, auto_client_out_d_valid) @[Decoupled.scala 50:35]
    node _merged_bits_last_beats1_decode_T_1 = dshl(UInt<6>("h3f"), auto_client_out_d_bits_size) @[package.scala 234:77]
    node _merged_bits_last_beats1_decode_T_2 = bits(_merged_bits_last_beats1_decode_T_1, 5, 0) @[package.scala 234:82]
    node _merged_bits_last_beats1_decode_T_3 = not(_merged_bits_last_beats1_decode_T_2) @[package.scala 234:46]
    node merged_bits_last_beats1_decode = shr(_merged_bits_last_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    node merged_bits_last_beats1_opdata = bits(auto_client_out_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node merged_bits_last_beats1 = mux(merged_bits_last_beats1_opdata, merged_bits_last_beats1_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    reg merged_bits_last_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), merged_bits_last_counter_1) @[Edges.scala 228:27]
    node _merged_bits_last_counter1_T_1 = sub(merged_bits_last_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node merged_bits_last_counter1_1 = tail(_merged_bits_last_counter1_T_1, 1) @[Edges.scala 229:28]
    node merged_bits_last_first_1 = eq(merged_bits_last_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _merged_bits_last_last_T_2 = eq(merged_bits_last_counter_1, UInt<3>("h1")) @[Edges.scala 231:25]
    node _merged_bits_last_last_T_3 = eq(merged_bits_last_beats1, UInt<3>("h0")) @[Edges.scala 231:47]
    node _merged_bits_last_counter_T_1 = mux(merged_bits_last_first_1, merged_bits_last_beats1, merged_bits_last_counter1_1) @[Edges.scala 235:21]
    node _GEN_1 = mux(_merged_bits_last_T_1, _merged_bits_last_counter_T_1, merged_bits_last_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node merged_4_ready = outArb.io_in_4_ready @[Serdes.scala 354:22 622:18]
    node _merged_bits_last_T_4 = and(merged_4_ready, auto_manager_in_a_valid) @[Decoupled.scala 50:35]
    node _merged_bits_last_beats1_decode_T_13 = dshl(UInt<6>("h3f"), auto_manager_in_a_bits_size) @[package.scala 234:77]
    node _merged_bits_last_beats1_decode_T_14 = bits(_merged_bits_last_beats1_decode_T_13, 5, 0) @[package.scala 234:82]
    node _merged_bits_last_beats1_decode_T_15 = not(_merged_bits_last_beats1_decode_T_14) @[package.scala 234:46]
    node merged_bits_last_beats1_decode_3 = shr(_merged_bits_last_beats1_decode_T_15, 3) @[Edges.scala 219:59]
    node _merged_bits_last_beats1_opdata_T_1 = bits(auto_manager_in_a_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node merged_bits_last_beats1_opdata_3 = not(_merged_bits_last_beats1_opdata_T_1) @[Edges.scala 91:28]
    node merged_bits_last_beats1_3 = mux(merged_bits_last_beats1_opdata_3, merged_bits_last_beats1_decode_3, UInt<3>("h0")) @[Edges.scala 220:14]
    reg merged_bits_last_counter_4 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), merged_bits_last_counter_4) @[Edges.scala 228:27]
    node _merged_bits_last_counter1_T_4 = sub(merged_bits_last_counter_4, UInt<3>("h1")) @[Edges.scala 229:28]
    node merged_bits_last_counter1_4 = tail(_merged_bits_last_counter1_T_4, 1) @[Edges.scala 229:28]
    node merged_bits_last_first_4 = eq(merged_bits_last_counter_4, UInt<3>("h0")) @[Edges.scala 230:25]
    node _merged_bits_last_last_T_8 = eq(merged_bits_last_counter_4, UInt<3>("h1")) @[Edges.scala 231:25]
    node _merged_bits_last_last_T_9 = eq(merged_bits_last_beats1_3, UInt<3>("h0")) @[Edges.scala 231:47]
    node _merged_bits_last_counter_T_4 = mux(merged_bits_last_first_4, merged_bits_last_beats1_3, merged_bits_last_counter1_4) @[Edges.scala 235:21]
    node _GEN_4 = mux(_merged_bits_last_T_4, _merged_bits_last_counter_T_4, merged_bits_last_counter_4) @[Edges.scala 234:17 235:15 228:27]
    node _bundleOut_0_a_valid_T = eq(inDes.io_out_bits_chanId, UInt<3>("h0")) @[Serdes.scala 234:37]
    node _bundleIn_0_d_valid_T = eq(inDes.io_out_bits_chanId, UInt<3>("h3")) @[Serdes.scala 237:37]
    node _GEN_5 = shr(inDes.io_out_bits_union, 1) @[Serdes.scala 465:31]
    node _bundleIn_0_d_bits_d_sink_T = pad(_GEN_5, 8) @[Serdes.scala 465:31]
    node _inDes_io_out_ready_T = eq(UInt<3>("h0"), inDes.io_out_bits_chanId) @[Mux.scala 81:61]
    node _inDes_io_out_ready_T_1 = and(_inDes_io_out_ready_T, auto_client_out_a_ready) @[Mux.scala 81:58]
    node _inDes_io_out_ready_T_2 = eq(UInt<3>("h1"), inDes.io_out_bits_chanId) @[Mux.scala 81:61]
    node _inDes_io_out_ready_T_3 = mux(_inDes_io_out_ready_T_2, UInt<1>("h0"), _inDes_io_out_ready_T_1) @[Mux.scala 81:58]
    node _inDes_io_out_ready_T_4 = eq(UInt<3>("h2"), inDes.io_out_bits_chanId) @[Mux.scala 81:61]
    node _inDes_io_out_ready_T_5 = mux(_inDes_io_out_ready_T_4, UInt<1>("h0"), _inDes_io_out_ready_T_3) @[Mux.scala 81:58]
    node _inDes_io_out_ready_T_6 = eq(UInt<3>("h3"), inDes.io_out_bits_chanId) @[Mux.scala 81:61]
    node _inDes_io_out_ready_T_7 = mux(_inDes_io_out_ready_T_6, auto_manager_in_d_ready, _inDes_io_out_ready_T_5) @[Mux.scala 81:58]
    node _inDes_io_out_ready_T_8 = eq(UInt<3>("h4"), inDes.io_out_bits_chanId) @[Mux.scala 81:61]
    auto_manager_in_a_ready <= outArb.io_in_4_ready @[Serdes.scala 354:22 622:18]
    auto_manager_in_d_valid <= and(inDes.io_out_valid, _bundleIn_0_d_valid_T) @[Serdes.scala 634:46]
    auto_manager_in_d_bits_opcode <= inDes.io_out_bits_opcode @[Serdes.scala 457:17 458:15]
    auto_manager_in_d_bits_param <= bits(inDes.io_out_bits_param, 1, 0) @[Serdes.scala 457:17 459:15]
    auto_manager_in_d_bits_size <= inDes.io_out_bits_size @[Serdes.scala 457:17 460:15]
    auto_manager_in_d_bits_source <= bits(inDes.io_out_bits_source, 0, 0) @[Serdes.scala 457:17 461:15]
    auto_manager_in_d_bits_sink <= bits(_bundleIn_0_d_bits_d_sink_T, 3, 0) @[Serdes.scala 457:17 465:17]
    auto_manager_in_d_bits_denied <= bits(inDes.io_out_bits_union, 0, 0) @[Serdes.scala 466:30]
    auto_manager_in_d_bits_data <= inDes.io_out_bits_data @[Serdes.scala 457:17 462:15]
    auto_manager_in_d_bits_corrupt <= inDes.io_out_bits_corrupt @[Serdes.scala 457:17 464:17]
    auto_client_out_a_valid <= and(inDes.io_out_valid, _bundleOut_0_a_valid_T) @[Serdes.scala 628:45]
    auto_client_out_a_bits_opcode <= inDes.io_out_bits_opcode @[Serdes.scala 371:17 372:15]
    auto_client_out_a_bits_param <= inDes.io_out_bits_param @[Serdes.scala 371:17 373:15]
    auto_client_out_a_bits_size <= bits(inDes.io_out_bits_size, 2, 0) @[Serdes.scala 371:17 374:15]
    auto_client_out_a_bits_source <= inDes.io_out_bits_source @[Serdes.scala 371:17 375:15]
    auto_client_out_a_bits_address <= bits(inDes.io_out_bits_address, 28, 0) @[Serdes.scala 371:17 376:15]
    auto_client_out_a_bits_mask <= inDes.io_out_bits_union @[Serdes.scala 371:17 382:15]
    auto_client_out_a_bits_data <= inDes.io_out_bits_data @[Serdes.scala 371:17 377:15]
    auto_client_out_a_bits_corrupt <= inDes.io_out_bits_corrupt @[Serdes.scala 371:17 379:17]
    auto_client_out_d_ready <= outArb.io_in_1_ready @[Serdes.scala 354:22 622:18]
    io_ser_in_ready <= inDes.io_in_ready @[Serdes.scala 627:17]
    io_ser_out_valid <= outSer.io_out_valid @[Serdes.scala 624:16]
    io_ser_out_bits <= outSer.io_out_bits @[Serdes.scala 624:16]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= outArb.io_in_4_ready @[Serdes.scala 354:22 622:18]
    monitor.io_in_a_valid <= auto_manager_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_manager_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_manager_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_manager_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_manager_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_manager_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_manager_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_manager_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_manager_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= and(inDes.io_out_valid, _bundleIn_0_d_valid_T) @[Serdes.scala 634:46]
    monitor.io_in_d_bits_opcode <= inDes.io_out_bits_opcode @[Serdes.scala 457:17 458:15]
    monitor.io_in_d_bits_param <= bits(inDes.io_out_bits_param, 1, 0) @[Serdes.scala 457:17 459:15]
    monitor.io_in_d_bits_size <= inDes.io_out_bits_size @[Serdes.scala 457:17 460:15]
    monitor.io_in_d_bits_source <= bits(inDes.io_out_bits_source, 0, 0) @[Serdes.scala 457:17 461:15]
    monitor.io_in_d_bits_sink <= bits(_bundleIn_0_d_bits_d_sink_T, 3, 0) @[Serdes.scala 457:17 465:17]
    monitor.io_in_d_bits_denied <= bits(inDes.io_out_bits_union, 0, 0) @[Serdes.scala 466:30]
    monitor.io_in_d_bits_corrupt <= inDes.io_out_bits_corrupt @[Serdes.scala 457:17 464:17]
    outArb.clock <= clock
    outArb.reset <= reset
    outArb.io_in_1_valid <= auto_client_out_d_valid @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    outArb.io_in_1_bits_opcode <= auto_client_out_d_bits_opcode @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    outArb.io_in_1_bits_param <= pad(auto_client_out_d_bits_param, 3) @[Serdes.scala 309:22 312:20]
    outArb.io_in_1_bits_size <= pad(auto_client_out_d_bits_size, 4) @[Serdes.scala 309:22 313:20]
    outArb.io_in_1_bits_source <= auto_client_out_d_bits_source @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    outArb.io_in_1_bits_data <= auto_client_out_d_bits_data @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    outArb.io_in_1_bits_corrupt <= auto_client_out_d_bits_corrupt @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    outArb.io_in_1_bits_union <= pad(_merged_bits_merged_union_T_1, 8) @[Serdes.scala 309:22 319:22]
    outArb.io_in_1_bits_last <= or(_merged_bits_last_last_T_2, _merged_bits_last_last_T_3) @[Edges.scala 231:37]
    outArb.io_in_4_valid <= auto_manager_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_opcode <= auto_manager_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_param <= auto_manager_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_size <= auto_manager_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_source <= pad(auto_manager_in_a_bits_source, 4) @[Serdes.scala 252:22 257:20]
    outArb.io_in_4_bits_address <= auto_manager_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_data <= auto_manager_in_a_bits_data @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_corrupt <= auto_manager_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_union <= auto_manager_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    outArb.io_in_4_bits_last <= or(_merged_bits_last_last_T_8, _merged_bits_last_last_T_9) @[Edges.scala 231:37]
    outArb.io_out_ready <= outSer.io_in_ready @[Serdes.scala 623:18]
    outSer.clock <= clock
    outSer.reset <= reset
    outSer.io_in_valid <= outArb.io_out_valid @[Serdes.scala 623:18]
    outSer.io_in_bits_chanId <= outArb.io_out_bits_chanId @[Serdes.scala 623:18]
    outSer.io_in_bits_opcode <= outArb.io_out_bits_opcode @[Serdes.scala 623:18]
    outSer.io_in_bits_param <= outArb.io_out_bits_param @[Serdes.scala 623:18]
    outSer.io_in_bits_size <= outArb.io_out_bits_size @[Serdes.scala 623:18]
    outSer.io_in_bits_source <= outArb.io_out_bits_source @[Serdes.scala 623:18]
    outSer.io_in_bits_address <= outArb.io_out_bits_address @[Serdes.scala 623:18]
    outSer.io_in_bits_data <= outArb.io_out_bits_data @[Serdes.scala 623:18]
    outSer.io_in_bits_corrupt <= outArb.io_out_bits_corrupt @[Serdes.scala 623:18]
    outSer.io_in_bits_union <= outArb.io_out_bits_union @[Serdes.scala 623:18]
    outSer.io_in_bits_last <= outArb.io_out_bits_last @[Serdes.scala 623:18]
    outSer.io_out_ready <= io_ser_out_ready @[Serdes.scala 624:16]
    merged_bits_last_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_1) @[Edges.scala 228:{27,27}]
    merged_bits_last_counter_4 <= mux(reset, UInt<3>("h0"), _GEN_4) @[Edges.scala 228:{27,27}]
    inDes.clock <= clock
    inDes.reset <= reset
    inDes.io_in_valid <= io_ser_in_valid @[Serdes.scala 627:17]
    inDes.io_in_bits <= io_ser_in_bits @[Serdes.scala 627:17]
    inDes.io_out_ready <= mux(_inDes_io_out_ready_T_8, UInt<1>("h0"), _inDes_io_out_ready_T_7) @[Mux.scala 81:58]

  module TLMonitor_64_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<2>
    input io_in_a_bits_source : UInt<8>
    input io_in_a_bits_address : UInt<29>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_size : UInt<2>
    input io_in_d_bits_source : UInt<8>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<3>("h7"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 2, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 29) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<29>("h0")) @[Edges.scala 20:24]
    node _mask_sizeOH_T = pad(io_in_a_bits_size, 3) @[Misc.scala 201:34]
    node mask_sizeOH_shiftAmount = bits(_mask_sizeOH_T, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<2>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<29>("h10000000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<30>("h-1000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _T_65 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_68 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_69 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_72 = not(_T_69) @[Monitor.scala 42:11]
    node _T_73 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_74 = eq(_T_73, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_77 = not(_T_74) @[Monitor.scala 42:11]
    node _T_78 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_81 = not(_T_78) @[Monitor.scala 42:11]
    node _T_82 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_135 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_138 = not(_T_135) @[Monitor.scala 42:11]
    node _T_148 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_176 = not(_T_37) @[Monitor.scala 42:11]
    node _T_183 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_186 = not(_T_183) @[Monitor.scala 42:11]
    node _T_187 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_236 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_273 = not(mask) @[Monitor.scala 127:33]
    node _T_274 = and(io_in_a_bits_mask, _T_273) @[Monitor.scala 127:31]
    node _T_275 = eq(_T_274, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_278 = not(_T_275) @[Monitor.scala 42:11]
    node _T_279 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_309 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_312 = not(_T_309) @[Monitor.scala 42:11]
    node _T_317 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_347 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_350 = not(_T_347) @[Monitor.scala 42:11]
    node _T_355 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_385 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_388 = not(_T_385) @[Monitor.scala 42:11]
    node _T_397 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_400 = not(_T_397) @[Monitor.scala 49:11]
    node _T_401 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_405 = geq(io_in_d_bits_size, UInt<2>("h3")) @[Monitor.scala 312:27]
    node _T_408 = not(_T_405) @[Monitor.scala 49:11]
    node _T_421 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_449 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_478 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_495 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_513 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node a_first_done = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    reg a_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = not(a_first_counter) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, UInt<1>("h0"), a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(a_first_done, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<29>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_542 = not(a_first) @[Monitor.scala 389:22]
    node _T_543 = and(io_in_a_valid, _T_542) @[Monitor.scala 389:19]
    node _T_544 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_547 = not(_T_544) @[Monitor.scala 42:11]
    node _T_548 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_551 = not(_T_548) @[Monitor.scala 42:11]
    node _T_552 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_555 = not(_T_552) @[Monitor.scala 42:11]
    node _T_556 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_559 = not(_T_556) @[Monitor.scala 42:11]
    node _T_560 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_563 = not(_T_560) @[Monitor.scala 42:11]
    node _T_565 = and(a_first_done, a_first) @[Monitor.scala 396:20]
    node d_first_done = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    reg d_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = not(d_first_counter) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, UInt<1>("h0"), d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(d_first_done, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg size_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    node _T_566 = not(d_first) @[Monitor.scala 541:22]
    node _T_567 = and(io_in_d_valid, _T_566) @[Monitor.scala 541:19]
    node _T_568 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_571 = not(_T_568) @[Monitor.scala 49:11]
    node _T_576 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_579 = not(_T_576) @[Monitor.scala 49:11]
    node _T_580 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_583 = not(_T_580) @[Monitor.scala 49:11]
    node _T_593 = and(d_first_done, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<256>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = not(a_first_counter_1) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, UInt<1>("h0"), a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(a_first_done, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = not(d_first_counter_1) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, UInt<1>("h0"), d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(d_first_done, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 11) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 1024) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 1024) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 1024) @[Monitor.scala 638:144]
    node _T_594 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node a_set_wo_ready = mux(_T_594, _a_set_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 648:71 649:22]
    node _T_597 = and(a_first_done, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<3>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 11) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_597, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_597, _a_sizes_set_interm_T_1, UInt<3>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_599 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_600 = bits(_T_599, 0, 0) @[Monitor.scala 658:26]
    node _T_601 = not(_T_600) @[Monitor.scala 658:17]
    node _T_604 = not(_T_601) @[Monitor.scala 42:11]
    node a_set = mux(_T_597, _a_set_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_597, _a_opcodes_set_T_1, UInt<2051>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_597, _a_sizes_set_T_1, UInt<2050>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_605 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_607 = not(_T_401) @[Monitor.scala 671:74]
    node _T_608 = and(_T_605, _T_607) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node d_clr_wo_ready = mux(_T_608, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 671:90 672:22]
    node _T_610 = and(d_first_done, d_first_1) @[Monitor.scala 675:27]
    node _T_613 = and(_T_610, _T_607) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_613, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_613, _d_opcodes_clr_T_5, UInt<2063>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_594, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_618 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_619 = bits(_T_618, 0, 0) @[Monitor.scala 682:25]
    node _T_620 = or(_T_619, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_623 = not(_T_620) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_624 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_625 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_626 = or(_T_624, _T_625) @[Monitor.scala 685:77]
    node _T_629 = not(_T_626) @[Monitor.scala 49:11]
    node _T_630 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_633 = not(_T_630) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_634 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_634), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_634), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_634), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_634), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_635 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_637 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_638 = or(_T_635, _T_637) @[Monitor.scala 689:72]
    node _T_641 = not(_T_638) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_642 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_645 = not(_T_642) @[Monitor.scala 49:11]
    node _T_647 = and(_T_605, a_first_1) @[Monitor.scala 694:36]
    node _T_648 = and(_T_647, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_650 = and(_T_648, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_652 = and(_T_650, _T_607) @[Monitor.scala 694:116]
    node _T_653 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_654 = or(_T_653, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_657 = not(_T_654) @[Monitor.scala 49:11]
    node _T_658 = neq(a_set_wo_ready, d_clr_wo_ready) @[Monitor.scala 699:29]
    node _T_659 = orr(a_set_wo_ready) @[Monitor.scala 699:67]
    node _T_660 = not(_T_659) @[Monitor.scala 699:51]
    node _T_661 = or(_T_658, _T_660) @[Monitor.scala 699:48]
    node _T_664 = not(_T_661) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 1023, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 1023, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 1023, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_665 = orr(inflight) @[Monitor.scala 709:26]
    node _T_666 = not(_T_665) @[Monitor.scala 709:16]
    node _T_667 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_668 = or(_T_666, _T_667) @[Monitor.scala 709:30]
    node _T_669 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_670 = or(_T_668, _T_669) @[Monitor.scala 709:47]
    node _T_673 = not(_T_670) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_676 = or(a_first_done, d_first_done) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_676, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_1 : UInt<256>, clock with :
      reset => (UInt<1>("h0"), inflight_1) @[Monitor.scala 723:35]
    reg inflight_sizes_1 : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = not(d_first_counter_2) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, UInt<1>("h0"), d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(d_first_done, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_opcode_lookup_T) @[Monitor.scala 747:42]
    node _c_size_lookup_T_6 = and(_c_size_lookup_T_1, _GEN_73) @[Monitor.scala 747:93]
    node _GEN_88 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_88, 1024) @[Monitor.scala 747:146]
    node _T_689 = bits(inflight_1, 0, 0) @[Monitor.scala 766:26]
    node _T_690 = not(_T_689) @[Monitor.scala 766:17]
    node _T_694 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_696 = and(_T_694, _T_401) @[Monitor.scala 779:71]
    node d_clr_wo_ready_1 = mux(_T_696, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 779:89 780:22]
    node _T_698 = and(d_first_done, d_first_2) @[Monitor.scala 783:27]
    node _T_700 = and(_T_698, _T_401) @[Monitor.scala 783:72]
    node d_clr_1 = mux(_T_700, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 783:90 784:21]
    node _GEN_68 = mux(_T_700, _d_opcodes_clr_T_5, UInt<2063>("h0")) @[Monitor.scala 783:90 785:21]
    node _T_704 = dshr(inflight_1, io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_705 = bits(_T_704, 0, 0) @[Monitor.scala 791:25]
    node _T_709 = not(_T_705) @[Monitor.scala 49:11]
    node _T_710 = eq(io_in_d_bits_size, UInt<2>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 3, 0)
    node _T_714 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    node _T_717 = not(_T_714) @[Monitor.scala 49:11]
    node _T_730 = neq(UInt<256>("h0"), d_clr_wo_ready_1) @[Monitor.scala 805:31]
    node _inflight_T_4 = not(d_clr_1) @[Monitor.scala 809:46]
    node _inflight_T_5 = and(inflight_1, _inflight_T_4) @[Monitor.scala 809:44]
    node d_opcodes_clr_1 = bits(_GEN_68, 1023, 0)
    node _inflight_opcodes_T_4 = not(d_opcodes_clr_1) @[Monitor.scala 810:62]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_opcodes_T_4) @[Monitor.scala 811:56]
    reg watchdog_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog_1) @[Monitor.scala 813:27]
    node _T_734 = orr(inflight_1) @[Monitor.scala 816:26]
    node _T_735 = not(_T_734) @[Monitor.scala 816:16]
    node _T_736 = eq(plusarg_reader_1.out, UInt<32>("h0")) @[Monitor.scala 816:39]
    node _T_737 = or(_T_735, _T_736) @[Monitor.scala 816:30]
    node _T_738 = lt(watchdog_1, plusarg_reader_1.out) @[Monitor.scala 816:59]
    node _T_739 = or(_T_737, _T_738) @[Monitor.scala 816:47]
    node _T_742 = not(_T_739) @[Monitor.scala 42:11]
    node _watchdog_T_2 = add(watchdog_1, UInt<32>("h1")) @[Monitor.scala 818:26]
    node _watchdog_T_3 = tail(_watchdog_T_2, 1) @[Monitor.scala 818:26]
    node _GEN_70 = mux(d_first_done, UInt<32>("h0"), _watchdog_T_3) @[Monitor.scala 818:14 819:{47,58}]
    a_first_counter <= mux(reset, UInt<1>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_565, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_565, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_565, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_565, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_565, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<1>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_593, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    size_1 <= mux(_T_593, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_593, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    inflight <= mux(reset, UInt<256>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<1024>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<1024>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_1 <= mux(reset, UInt<256>("h0"), _inflight_T_5) @[Monitor.scala 723:{35,35} 809:22]
    inflight_sizes_1 <= mux(reset, UInt<1024>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<1>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    watchdog_1 <= mux(reset, UInt<32>("h0"), _GEN_70) @[Monitor.scala 813:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_65), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_68), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_72), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_81), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_82) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_65), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_68), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_72), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_135), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_138), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_81), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_148) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_176), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_68), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_186), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_190), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_81), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_154 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_176), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_68), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_186), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_190), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_165 = and(io_in_a_valid, _T_236) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_165, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_167 = and(_GEN_165, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_176), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_165, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_165, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_68), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_165, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_186), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_275), and(_GEN_165, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_278), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_178 = and(io_in_a_valid, _T_279) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_178, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_178, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_178, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_178, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_183 = and(_GEN_178, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_68), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_309), and(_GEN_178, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_312), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_178, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_190), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_190 = and(io_in_a_valid, _T_317) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_190, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_190, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_190, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_190, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_195 = and(_GEN_190, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_68), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_347), and(_GEN_190, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_350), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_190, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_190), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_202 = and(io_in_a_valid, _T_355) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_202, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_202, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_202, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_202, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_207 = and(_GEN_202, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_68), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_385), and(_GEN_202, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_388), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_202, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_190), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_202, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_81), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_397), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_217 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_217, _T_400), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_218 = and(io_in_d_valid, _T_401) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_218, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    node _GEN_221 = and(_GEN_218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_408), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    node _GEN_225 = and(io_in_d_valid, _T_421) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_225, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_225, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_225, _T_2), "Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_225, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    node _GEN_230 = and(_GEN_225, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_230, _T_408), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_225, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_225, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_225, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_225, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    node _GEN_235 = and(io_in_d_valid, _T_449) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_235, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_235, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_235, _T_2), "Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_235, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    node _GEN_240 = and(_GEN_235, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_240, _T_408), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_235, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_235, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_235, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_235, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    node _GEN_245 = and(io_in_d_valid, _T_478) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_245, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_245, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_245, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_245, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    node _GEN_249 = and(io_in_d_valid, _T_495) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    node _GEN_253 = and(io_in_d_valid, _T_513) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_253, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_253, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_253, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_253, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_544), and(_T_543, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_257 = and(_T_543, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_257, _T_547), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_548), and(_T_543, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_257, _T_551), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_552), and(_T_543, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_257, _T_555), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_556), and(_T_543, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_257, _T_559), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_560), and(_T_543, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_257, _T_563), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_568), and(_T_567, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_262 = and(_T_567, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_262, _T_571), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_567, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_576), and(_T_567, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_262, _T_579), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_580), and(_T_567, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_262, _T_583), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_567, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_567, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_601), and(_T_597, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_265 = and(_T_597, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_265, _T_604), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_620), and(_T_608, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_266 = and(_T_608, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_266, _T_623), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_267 = and(_T_608, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_626), and(_GEN_267, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_269 = and(_GEN_267, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_269, _T_629), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_630), and(_GEN_267, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_269, _T_633), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_273 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_274 = and(_T_608, _GEN_273) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_638), and(_GEN_274, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_277 = and(_GEN_274, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_277, _T_641), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_642), and(_GEN_274, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_277, _T_645), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_654), and(_T_652, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_283 = and(_T_652, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_283, _T_657), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_661), _T_2), 1) : assert_105 @[Monitor.scala 49:11]
    printf(clock, and(_T_2, _T_664), "Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_105 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_670), _T_2), 1) : assert_106 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_673), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_106 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_705), and(_T_696, _T_2)), 1) : assert_108 @[Monitor.scala 49:11]
    node _GEN_284 = and(_T_696, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_284, _T_709), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_108 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_714), and(_T_696, _T_2)), 1) : assert_110 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_284, _T_717), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_110 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_739), _T_2), 1) : assert_113 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_742), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_113 @[Monitor.scala 42:11]

  module TLRAM_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<2>
    input auto_in_a_bits_source : UInt<8>
    input auto_in_a_bits_address : UInt<29>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_data : UInt<64>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_opcode : UInt<3>
    output auto_in_d_bits_size : UInt<2>
    output auto_in_d_bits_source : UInt<8>
    output auto_in_d_bits_data : UInt<64>

    inst monitor of TLMonitor_64_inTestHarness @[Nodes.scala 24:25]
    inst mem of mem_inTestHarness @[DescribedSRAM.scala 17:26]
    reg r_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), r_full) @[SRAM.scala 119:30]
    reg r_size : UInt<2>, clock with :
      reset => (UInt<1>("h0"), r_size) @[SRAM.scala 122:26]
    reg r_source : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_source) @[SRAM.scala 123:26]
    reg r_read : UInt<1>, clock with :
      reset => (UInt<1>("h0"), r_read) @[SRAM.scala 124:26]
    reg REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), REG) @[SRAM.scala 306:58]
    reg r_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_1) @[Reg.scala 16:16]
    node r_raw_data_1 = mux(REG, mem.RW0_rdata_1, r_1) @[package.scala 79:42]
    reg r_0 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_0) @[Reg.scala 16:16]
    node r_raw_data_0 = mux(REG, mem.RW0_rdata_0, r_0) @[package.scala 79:42]
    node r_corrected_lo_lo = cat(r_raw_data_1, r_raw_data_0) @[Cat.scala 31:58]
    reg r_3 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_3) @[Reg.scala 16:16]
    node r_raw_data_3 = mux(REG, mem.RW0_rdata_3, r_3) @[package.scala 79:42]
    reg r_2 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_2) @[Reg.scala 16:16]
    node r_raw_data_2 = mux(REG, mem.RW0_rdata_2, r_2) @[package.scala 79:42]
    node r_corrected_lo_hi = cat(r_raw_data_3, r_raw_data_2) @[Cat.scala 31:58]
    node r_corrected_lo = cat(r_corrected_lo_hi, r_corrected_lo_lo) @[Cat.scala 31:58]
    reg r_5 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_5) @[Reg.scala 16:16]
    node r_raw_data_5 = mux(REG, mem.RW0_rdata_5, r_5) @[package.scala 79:42]
    reg r_4 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_4) @[Reg.scala 16:16]
    node r_raw_data_4 = mux(REG, mem.RW0_rdata_4, r_4) @[package.scala 79:42]
    node r_corrected_hi_lo = cat(r_raw_data_5, r_raw_data_4) @[Cat.scala 31:58]
    reg r_7 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_7) @[Reg.scala 16:16]
    node r_raw_data_7 = mux(REG, mem.RW0_rdata_7, r_7) @[package.scala 79:42]
    reg r_6 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r_6) @[Reg.scala 16:16]
    node r_raw_data_6 = mux(REG, mem.RW0_rdata_6, r_6) @[package.scala 79:42]
    node r_corrected_hi_hi = cat(r_raw_data_7, r_raw_data_6) @[Cat.scala 31:58]
    node r_corrected_hi = cat(r_corrected_hi_hi, r_corrected_hi_lo) @[Cat.scala 31:58]
    node _T_15 = not(reset) @[SRAM.scala 222:12]
    node _bundleIn_0_a_ready_T_2 = not(r_full) @[SRAM.scala 228:41]
    node in_a_ready = or(_bundleIn_0_a_ready_T_2, auto_in_d_ready) @[SRAM.scala 228:49]
    node a_read = eq(auto_in_a_bits_opcode, UInt<3>("h4")) @[SRAM.scala 236:35]
    node _GEN_22 = mux(auto_in_d_ready, UInt<1>("h0"), r_full) @[SRAM.scala 258:{20,29} 119:30]
    node _T_18 = and(in_a_ready, auto_in_a_valid) @[Decoupled.scala 50:35]
    node _T_19 = not(a_read) @[SRAM.scala 272:13]
    node _GEN_24 = or(_T_18, _GEN_22) @[SRAM.scala 259:24 260:18]
    node _a_lanes_T = bits(auto_in_a_bits_mask, 0, 0) @[SRAM.scala 288:64]
    node _a_lanes_T_1 = orr(_a_lanes_T) @[SRAM.scala 288:95]
    node _a_lanes_T_2 = bits(auto_in_a_bits_mask, 1, 1) @[SRAM.scala 288:64]
    node _a_lanes_T_3 = orr(_a_lanes_T_2) @[SRAM.scala 288:95]
    node _a_lanes_T_4 = bits(auto_in_a_bits_mask, 2, 2) @[SRAM.scala 288:64]
    node _a_lanes_T_5 = orr(_a_lanes_T_4) @[SRAM.scala 288:95]
    node _a_lanes_T_6 = bits(auto_in_a_bits_mask, 3, 3) @[SRAM.scala 288:64]
    node _a_lanes_T_7 = orr(_a_lanes_T_6) @[SRAM.scala 288:95]
    node _a_lanes_T_8 = bits(auto_in_a_bits_mask, 4, 4) @[SRAM.scala 288:64]
    node _a_lanes_T_9 = orr(_a_lanes_T_8) @[SRAM.scala 288:95]
    node _a_lanes_T_10 = bits(auto_in_a_bits_mask, 5, 5) @[SRAM.scala 288:64]
    node _a_lanes_T_11 = orr(_a_lanes_T_10) @[SRAM.scala 288:95]
    node _a_lanes_T_12 = bits(auto_in_a_bits_mask, 6, 6) @[SRAM.scala 288:64]
    node _a_lanes_T_13 = orr(_a_lanes_T_12) @[SRAM.scala 288:95]
    node _a_lanes_T_14 = bits(auto_in_a_bits_mask, 7, 7) @[SRAM.scala 288:64]
    node _a_lanes_T_15 = orr(_a_lanes_T_14) @[SRAM.scala 288:95]
    node a_lanes_lo_lo = cat(_a_lanes_T_3, _a_lanes_T_1) @[Cat.scala 31:58]
    node a_lanes_lo_hi = cat(_a_lanes_T_7, _a_lanes_T_5) @[Cat.scala 31:58]
    node a_lanes_lo = cat(a_lanes_lo_hi, a_lanes_lo_lo) @[Cat.scala 31:58]
    node a_lanes_hi_lo = cat(_a_lanes_T_11, _a_lanes_T_9) @[Cat.scala 31:58]
    node a_lanes_hi_hi = cat(_a_lanes_T_15, _a_lanes_T_13) @[Cat.scala 31:58]
    node a_lanes_hi = cat(a_lanes_hi_hi, a_lanes_hi_lo) @[Cat.scala 31:58]
    node a_lanes = cat(a_lanes_hi, a_lanes_lo) @[Cat.scala 31:58]
    node wen = and(_T_18, _T_19) @[SRAM.scala 294:52]
    node _ren_T = not(wen) @[SRAM.scala 295:15]
    node ren = and(_ren_T, _T_18) @[SRAM.scala 295:20]
    node _index_T = shr(auto_in_a_bits_address, 3) @[SRAM.scala 305:36]
    node _index_T_1 = bits(_index_T, 0, 0) @[SRAM.scala 305:60]
    node _index_T_2 = bits(_index_T, 1, 1) @[SRAM.scala 305:60]
    node _index_T_3 = bits(_index_T, 2, 2) @[SRAM.scala 305:60]
    node _index_T_4 = bits(_index_T, 3, 3) @[SRAM.scala 305:60]
    node _index_T_5 = bits(_index_T, 4, 4) @[SRAM.scala 305:60]
    node _index_T_6 = bits(_index_T, 5, 5) @[SRAM.scala 305:60]
    node _index_T_7 = bits(_index_T, 6, 6) @[SRAM.scala 305:60]
    node _index_T_8 = bits(_index_T, 7, 7) @[SRAM.scala 305:60]
    node _index_T_9 = bits(_index_T, 8, 8) @[SRAM.scala 305:60]
    node index_lo_lo = cat(_index_T_2, _index_T_1) @[Cat.scala 31:58]
    node index_lo_hi = cat(_index_T_4, _index_T_3) @[Cat.scala 31:58]
    node index_lo = cat(index_lo_hi, index_lo_lo) @[Cat.scala 31:58]
    node index_hi_lo = cat(_index_T_6, _index_T_5) @[Cat.scala 31:58]
    node index_hi_hi_hi = cat(_index_T_9, _index_T_8) @[Cat.scala 31:58]
    node index_hi_hi = cat(index_hi_hi_hi, _index_T_7) @[Cat.scala 31:58]
    node index_hi = cat(index_hi_hi, index_hi_lo) @[Cat.scala 31:58]
    auto_in_a_ready <= or(_bundleIn_0_a_ready_T_2, auto_in_d_ready) @[SRAM.scala 228:49]
    auto_in_d_valid <= r_full @[SRAM.scala 225:65]
    auto_in_d_bits_opcode <= pad(r_read, 3) @[Nodes.scala 1210:84 SRAM.scala 194:23]
    auto_in_d_bits_size <= r_size @[SRAM.scala 196:29]
    auto_in_d_bits_source <= r_source @[SRAM.scala 197:29]
    auto_in_d_bits_data <= cat(r_corrected_hi, r_corrected_lo) @[Cat.scala 31:58]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= or(_bundleIn_0_a_ready_T_2, auto_in_d_ready) @[SRAM.scala 228:49]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= r_full @[SRAM.scala 225:65]
    monitor.io_in_d_bits_opcode <= pad(r_read, 3) @[Nodes.scala 1210:84 SRAM.scala 194:23]
    monitor.io_in_d_bits_size <= r_size @[SRAM.scala 196:29]
    monitor.io_in_d_bits_source <= r_source @[SRAM.scala 197:29]
    mem.RW0_clk <= clock @[SRAM.scala 307:16]
    mem.RW0_wdata_0 <= bits(auto_in_a_bits_data, 7, 0) @[SRAM.scala 276:67]
    mem.RW0_wdata_1 <= bits(auto_in_a_bits_data, 15, 8) @[SRAM.scala 276:67]
    mem.RW0_wdata_2 <= bits(auto_in_a_bits_data, 23, 16) @[SRAM.scala 276:67]
    mem.RW0_wdata_3 <= bits(auto_in_a_bits_data, 31, 24) @[SRAM.scala 276:67]
    mem.RW0_wdata_4 <= bits(auto_in_a_bits_data, 39, 32) @[SRAM.scala 276:67]
    mem.RW0_wdata_5 <= bits(auto_in_a_bits_data, 47, 40) @[SRAM.scala 276:67]
    mem.RW0_wdata_6 <= bits(auto_in_a_bits_data, 55, 48) @[SRAM.scala 276:67]
    mem.RW0_wdata_7 <= bits(auto_in_a_bits_data, 63, 56) @[SRAM.scala 276:67]
    mem.RW0_wmask_0 <= bits(a_lanes, 0, 0) @[SRAM.scala 307:46]
    mem.RW0_wmask_1 <= bits(a_lanes, 1, 1) @[SRAM.scala 307:46]
    mem.RW0_wmask_2 <= bits(a_lanes, 2, 2) @[SRAM.scala 307:46]
    mem.RW0_wmask_3 <= bits(a_lanes, 3, 3) @[SRAM.scala 307:46]
    mem.RW0_wmask_4 <= bits(a_lanes, 4, 4) @[SRAM.scala 307:46]
    mem.RW0_wmask_5 <= bits(a_lanes, 5, 5) @[SRAM.scala 307:46]
    mem.RW0_wmask_6 <= bits(a_lanes, 6, 6) @[SRAM.scala 307:46]
    mem.RW0_wmask_7 <= bits(a_lanes, 7, 7) @[SRAM.scala 307:46]
    r_full <= mux(reset, UInt<1>("h0"), _GEN_24) @[SRAM.scala 119:{30,30}]
    r_size <= mux(_T_18, auto_in_a_bits_size, r_size) @[SRAM.scala 259:24 264:18 122:26]
    r_source <= mux(_T_18, auto_in_a_bits_source, r_source) @[SRAM.scala 259:24 265:18 123:26]
    r_read <= mux(_T_18, a_read, r_read) @[SRAM.scala 259:24 266:18 124:26]
    REG <= and(_ren_T, _T_18) @[SRAM.scala 295:20]
    r_0 <= mux(REG, mem.RW0_rdata_0, r_0) @[Reg.scala 16:16 17:{18,22}]
    r_1 <= mux(REG, mem.RW0_rdata_1, r_1) @[Reg.scala 16:16 17:{18,22}]
    r_2 <= mux(REG, mem.RW0_rdata_2, r_2) @[Reg.scala 16:16 17:{18,22}]
    r_3 <= mux(REG, mem.RW0_rdata_3, r_3) @[Reg.scala 16:16 17:{18,22}]
    r_4 <= mux(REG, mem.RW0_rdata_4, r_4) @[Reg.scala 16:16 17:{18,22}]
    r_5 <= mux(REG, mem.RW0_rdata_5, r_5) @[Reg.scala 16:16 17:{18,22}]
    r_6 <= mux(REG, mem.RW0_rdata_6, r_6) @[Reg.scala 16:16 17:{18,22}]
    r_7 <= mux(REG, mem.RW0_rdata_7, r_7) @[Reg.scala 16:16 17:{18,22}]
    stop(clock, and(not(UInt<1>("h1")), _T_15), 1) : assert @[SRAM.scala 222:12]
    mem.RW0_en <= or(ren, wen)
    mem.RW0_wmode <= and(_T_18, _T_19) @[SRAM.scala 294:52]
    mem.RW0_addr <= cat(index_hi, index_lo) @[Cat.scala 31:58]

  module TLMonitor_65_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<2>
    input io_in_a_bits_source : UInt<8>
    input io_in_a_bits_address : UInt<18>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_size : UInt<2>
    input io_in_d_bits_source : UInt<8>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<3>("h7"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 2, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 18) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<18>("h0")) @[Edges.scala 20:24]
    node _mask_sizeOH_T = pad(io_in_a_bits_size, 3) @[Misc.scala 201:34]
    node mask_sizeOH_shiftAmount = bits(_mask_sizeOH_T, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<2>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<18>("h20000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<19>("h-10000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<19>("h0")) @[Parameters.scala 137:67]
    node _T_65 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_68 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_69 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_72 = not(_T_69) @[Monitor.scala 42:11]
    node _T_73 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_74 = eq(_T_73, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_77 = not(_T_74) @[Monitor.scala 42:11]
    node _T_78 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_81 = not(_T_78) @[Monitor.scala 42:11]
    node _T_82 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_135 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_138 = not(_T_135) @[Monitor.scala 42:11]
    node _T_148 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_176 = not(_T_37) @[Monitor.scala 42:11]
    node _T_183 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_186 = not(_T_183) @[Monitor.scala 42:11]
    node _T_187 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_233 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_267 = not(mask) @[Monitor.scala 127:33]
    node _T_268 = and(io_in_a_bits_mask, _T_267) @[Monitor.scala 127:31]
    node _T_269 = eq(_T_268, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_272 = not(_T_269) @[Monitor.scala 42:11]
    node _T_273 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_303 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_306 = not(_T_303) @[Monitor.scala 42:11]
    node _T_311 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_341 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_344 = not(_T_341) @[Monitor.scala 42:11]
    node _T_349 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_379 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_382 = not(_T_379) @[Monitor.scala 42:11]
    node _T_399 = geq(io_in_d_bits_size, UInt<2>("h3")) @[Monitor.scala 312:27]
    node a_first_done = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    reg a_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = not(a_first_counter) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, UInt<1>("h0"), a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(a_first_done, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<18>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_536 = not(a_first) @[Monitor.scala 389:22]
    node _T_537 = and(io_in_a_valid, _T_536) @[Monitor.scala 389:19]
    node _T_538 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_541 = not(_T_538) @[Monitor.scala 42:11]
    node _T_542 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_545 = not(_T_542) @[Monitor.scala 42:11]
    node _T_546 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_549 = not(_T_546) @[Monitor.scala 42:11]
    node _T_550 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_553 = not(_T_550) @[Monitor.scala 42:11]
    node _T_554 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_557 = not(_T_554) @[Monitor.scala 42:11]
    node _T_559 = and(a_first_done, a_first) @[Monitor.scala 396:20]
    node d_first_done = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    reg d_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = not(d_first_counter) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, UInt<1>("h0"), d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(d_first_done, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg size_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    node _T_560 = not(d_first) @[Monitor.scala 541:22]
    node _T_561 = and(io_in_d_valid, _T_560) @[Monitor.scala 541:19]
    node _T_570 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_573 = not(_T_570) @[Monitor.scala 49:11]
    node _T_574 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_577 = not(_T_574) @[Monitor.scala 49:11]
    node _T_587 = and(d_first_done, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<256>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = not(a_first_counter_1) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, UInt<1>("h0"), a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(a_first_done, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = not(d_first_counter_1) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, UInt<1>("h0"), d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(d_first_done, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 11) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 1024) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 1024) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 1024) @[Monitor.scala 638:144]
    node _T_588 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node _T_591 = and(a_first_done, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<3>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 11) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_591, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_591, _a_sizes_set_interm_T_1, UInt<3>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_593 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_594 = bits(_T_593, 0, 0) @[Monitor.scala 658:26]
    node _T_595 = not(_T_594) @[Monitor.scala 658:17]
    node _T_598 = not(_T_595) @[Monitor.scala 42:11]
    node a_set = mux(_T_591, _a_set_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_591, _a_opcodes_set_T_1, UInt<2051>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_591, _a_sizes_set_T_1, UInt<2050>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_599 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node _T_604 = and(d_first_done, d_first_1) @[Monitor.scala 675:27]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_604, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_604, _d_opcodes_clr_T_5, UInt<2063>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_588, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_612 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_613 = bits(_T_612, 0, 0) @[Monitor.scala 682:25]
    node _T_614 = or(_T_613, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_617 = not(_T_614) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_618 = eq(UInt<3>("h1"), _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_619 = eq(UInt<3>("h1"), _GEN_40) @[Monitor.scala 686:39]
    node _T_620 = or(_T_618, _T_619) @[Monitor.scala 685:77]
    node _T_623 = not(_T_620) @[Monitor.scala 49:11]
    node _T_624 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_627 = not(_T_624) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_628 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_628), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_628), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_628), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_628), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_628), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_628), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_629 = eq(UInt<3>("h1"), _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_628), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_628), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_631 = eq(UInt<3>("h1"), _GEN_56) @[Monitor.scala 690:38]
    node _T_632 = or(_T_629, _T_631) @[Monitor.scala 689:72]
    node _T_635 = not(_T_632) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_636 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_639 = not(_T_636) @[Monitor.scala 49:11]
    node _T_641 = and(_T_599, a_first_1) @[Monitor.scala 694:36]
    node _T_642 = and(_T_641, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_644 = and(_T_642, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_647 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_648 = or(_T_647, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_651 = not(_T_648) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 1023, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 1023, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 1023, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_652 = orr(inflight) @[Monitor.scala 709:26]
    node _T_653 = not(_T_652) @[Monitor.scala 709:16]
    node _T_654 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_655 = or(_T_653, _T_654) @[Monitor.scala 709:30]
    node _T_656 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_657 = or(_T_655, _T_656) @[Monitor.scala 709:47]
    node _T_660 = not(_T_657) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_663 = or(a_first_done, d_first_done) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_663, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    node _c_opcode_lookup_T_1 = dshr(UInt<1024>("h0"), _a_opcode_lookup_T) @[Monitor.scala 746:44]
    node _c_opcode_lookup_T_6 = and(_c_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 746:97]
    node _GEN_85 = shr(_c_opcode_lookup_T_6, 1) @[Monitor.scala 746:152]
    node _c_opcode_lookup_T_7 = pad(_GEN_85, 1024) @[Monitor.scala 746:152]
    node _T_691 = dshr(UInt<256>("h0"), io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_692 = bits(_T_691, 0, 0) @[Monitor.scala 791:25]
    node _T_697 = eq(io_in_d_bits_size, UInt<2>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_opcode_lookup_T_7, 3, 0)
    node _T_701 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    a_first_counter <= mux(reset, UInt<1>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_559, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_559, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_559, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_559, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_559, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<1>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    size_1 <= mux(_T_587, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_587, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    inflight <= mux(reset, UInt<256>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<1024>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<1024>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_65), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_68), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_72), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_81), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_82) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_65), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_68), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_72), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_135), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_138), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_81), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_148) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_176), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_68), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_186), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_190), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_81), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_152, _T_2), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    node _GEN_157 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_68), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_186), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_190), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_164 = and(io_in_a_valid, _T_233) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_164, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_164, _T_2), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_164, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_164, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    node _GEN_169 = and(_GEN_164, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_68), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_164, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_186), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_269), and(_GEN_164, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_272), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_176 = and(io_in_a_valid, _T_273) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_176, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_176, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_176, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_176, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_181 = and(_GEN_176, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_68), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_303), and(_GEN_176, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_306), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_176, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_190), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_188 = and(io_in_a_valid, _T_311) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_188, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_188, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_188, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_188, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_193 = and(_GEN_188, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_68), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_341), and(_GEN_188, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_344), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_188, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_190), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_200 = and(io_in_a_valid, _T_349) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_200, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_200, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_200, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_200, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_205 = and(_GEN_200, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_68), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_379), and(_GEN_200, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_382), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_200, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_190), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_200, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_81), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_538), and(_T_537, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_215 = and(_T_537, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_541), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_542), and(_T_537, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_545), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_546), and(_T_537, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_549), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_550), and(_T_537, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_553), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_554), and(_T_537, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_557), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_570), and(_T_561, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    node _GEN_220 = and(_T_561, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_220, _T_573), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_574), and(_T_561, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_220, _T_577), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_595), and(_T_591, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_222 = and(_T_591, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_222, _T_598), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_614), and(_T_599, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_223 = and(_T_599, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_223, _T_617), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_224 = and(_T_599, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_620), and(_GEN_224, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_226 = and(_GEN_224, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_226, _T_623), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_624), and(_GEN_224, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_226, _T_627), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_230 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_231 = and(_T_599, _GEN_230) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_632), and(_GEN_231, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_234 = and(_GEN_231, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_234, _T_635), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_636), and(_GEN_231, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_234, _T_639), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_648), and(_T_644, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_240 = and(_T_644, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_240, _T_651), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_657), _T_2), 1) : assert_105 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_660), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_105 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_111 @[Monitor.scala 42:11]

  module TLROM_1_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<2>
    input auto_in_a_bits_source : UInt<8>
    input auto_in_a_bits_address : UInt<18>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_size : UInt<2>
    output auto_in_d_bits_source : UInt<8>
    output auto_in_d_bits_data : UInt<64>

    inst monitor of TLMonitor_65_inTestHarness @[Nodes.scala 24:25]
    node index = bits(auto_in_a_bits_address, 4, 3) @[BootROM.scala 49:34]
    node high = bits(auto_in_a_bits_address, 15, 5) @[BootROM.scala 50:68]
    node _bundleIn_0_d_bits_T = orr(high) @[BootROM.scala 51:53]
    node _GEN_1 = mux(eq(UInt<2>("h1"), index), UInt<64>("h253734151073"), UInt<64>("h1f515130010051b")) @[BootROM.scala 51:{47,47}]
    node _GEN_2 = mux(eq(UInt<2>("h2"), index), UInt<64>("h300520738005051b"), _GEN_1) @[BootROM.scala 51:{47,47}]
    node _GEN_3 = mux(eq(UInt<2>("h3"), index), UInt<64>("h30200073f1402573"), _GEN_2) @[BootROM.scala 51:{47,47}]
    auto_in_a_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_in_d_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_in_d_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_in_d_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_in_d_bits_data <= mux(_bundleIn_0_d_bits_T, UInt<64>("h0"), _GEN_3) @[BootROM.scala 51:47]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]

  module TLMonitor_66_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<3>
    input io_in_a_bits_source : UInt<4>
    input io_in_a_bits_address : UInt<29>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_param : UInt<2>
    input io_in_d_bits_size : UInt<3>
    input io_in_d_bits_source : UInt<4>
    input io_in_d_bits_sink : UInt<1>
    input io_in_d_bits_denied : UInt<1>
    input io_in_d_bits_corrupt : UInt<1>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<6>("h3f"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 5, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 29) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<29>("h0")) @[Edges.scala 20:24]
    node mask_sizeOH_shiftAmount = bits(io_in_a_bits_size, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<3>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<29>("h20000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<30>("h-10000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _T_38 = xor(io_in_a_bits_address, UInt<29>("h10000000")) @[Parameters.scala 137:31]
    node _T_39 = cvt(_T_38) @[Parameters.scala 137:49]
    node _T_40 = and(_T_39, SInt<30>("h-1000")) @[Parameters.scala 137:52]
    node _T_41 = asSInt(_T_40) @[Parameters.scala 137:52]
    node _T_42 = eq(_T_41, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _T_43 = or(_T_37, _T_42) @[Parameters.scala 671:42]
    node _T_77 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_80 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_81 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_84 = not(_T_81) @[Monitor.scala 42:11]
    node _T_85 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_86 = eq(_T_85, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_89 = not(_T_86) @[Monitor.scala 42:11]
    node _T_90 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_93 = not(_T_90) @[Monitor.scala 42:11]
    node _T_94 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_159 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_162 = not(_T_159) @[Monitor.scala 42:11]
    node _T_172 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_188 = leq(io_in_a_bits_size, UInt<3>("h6")) @[Parameters.scala 92:42]
    node _T_202 = and(_T_188, _T_43) @[Parameters.scala 670:56]
    node _T_206 = not(_T_202) @[Monitor.scala 42:11]
    node _T_213 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_216 = not(_T_213) @[Monitor.scala 42:11]
    node _T_217 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_220 = not(_T_217) @[Monitor.scala 42:11]
    node _T_225 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_246 = and(_T_188, _T_42) @[Parameters.scala 670:56]
    node _T_259 = not(_T_246) @[Monitor.scala 42:11]
    node _T_274 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_319 = not(mask) @[Monitor.scala 127:33]
    node _T_320 = and(io_in_a_bits_mask, _T_319) @[Monitor.scala 127:31]
    node _T_321 = eq(_T_320, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_324 = not(_T_321) @[Monitor.scala 42:11]
    node _T_325 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_361 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_364 = not(_T_361) @[Monitor.scala 42:11]
    node _T_369 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_405 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_408 = not(_T_405) @[Monitor.scala 42:11]
    node _T_413 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_449 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_452 = not(_T_449) @[Monitor.scala 42:11]
    node _T_461 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_464 = not(_T_461) @[Monitor.scala 49:11]
    node _T_465 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_469 = geq(io_in_d_bits_size, UInt<3>("h3")) @[Monitor.scala 312:27]
    node _T_472 = not(_T_469) @[Monitor.scala 49:11]
    node _T_473 = eq(io_in_d_bits_param, UInt<2>("h0")) @[Monitor.scala 313:28]
    node _T_476 = not(_T_473) @[Monitor.scala 49:11]
    node _T_477 = not(io_in_d_bits_corrupt) @[Monitor.scala 314:15]
    node _T_480 = not(_T_477) @[Monitor.scala 49:11]
    node _T_481 = not(io_in_d_bits_denied) @[Monitor.scala 315:15]
    node _T_484 = not(_T_481) @[Monitor.scala 49:11]
    node _T_485 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_496 = leq(io_in_d_bits_param, UInt<2>("h2")) @[Bundles.scala 102:26]
    node _T_499 = not(_T_496) @[Monitor.scala 49:11]
    node _T_500 = neq(io_in_d_bits_param, UInt<2>("h2")) @[Monitor.scala 323:28]
    node _T_503 = not(_T_500) @[Monitor.scala 49:11]
    node _T_513 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_533 = or(_T_481, io_in_d_bits_corrupt) @[Monitor.scala 334:30]
    node _T_536 = not(_T_533) @[Monitor.scala 49:11]
    node _T_542 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_559 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_577 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node _a_first_T = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    node a_first_beats1_decode = shr(is_aligned_mask, 3) @[Edges.scala 219:59]
    node _a_first_beats1_opdata_T = bits(io_in_a_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node a_first_beats1_opdata = not(_a_first_beats1_opdata_T) @[Edges.scala 91:28]
    node a_first_beats1 = mux(a_first_beats1_opdata, a_first_beats1_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    reg a_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = eq(a_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, a_first_beats1, a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(_a_first_T, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<29>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_606 = not(a_first) @[Monitor.scala 389:22]
    node _T_607 = and(io_in_a_valid, _T_606) @[Monitor.scala 389:19]
    node _T_608 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_611 = not(_T_608) @[Monitor.scala 42:11]
    node _T_612 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_615 = not(_T_612) @[Monitor.scala 42:11]
    node _T_616 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_619 = not(_T_616) @[Monitor.scala 42:11]
    node _T_620 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_623 = not(_T_620) @[Monitor.scala 42:11]
    node _T_624 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_627 = not(_T_624) @[Monitor.scala 42:11]
    node _T_629 = and(_a_first_T, a_first) @[Monitor.scala 396:20]
    node _d_first_T = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    node _d_first_beats1_decode_T_1 = dshl(UInt<6>("h3f"), io_in_d_bits_size) @[package.scala 234:77]
    node _d_first_beats1_decode_T_2 = bits(_d_first_beats1_decode_T_1, 5, 0) @[package.scala 234:82]
    node _d_first_beats1_decode_T_3 = not(_d_first_beats1_decode_T_2) @[package.scala 234:46]
    node d_first_beats1_decode = shr(_d_first_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    node d_first_beats1_opdata = bits(io_in_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node d_first_beats1 = mux(d_first_beats1_opdata, d_first_beats1_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    reg d_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = eq(d_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, d_first_beats1, d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(_d_first_T, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg param_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), param_1) @[Monitor.scala 536:22]
    reg size_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    reg sink : UInt<1>, clock with :
      reset => (UInt<1>("h0"), sink) @[Monitor.scala 539:22]
    reg denied : UInt<1>, clock with :
      reset => (UInt<1>("h0"), denied) @[Monitor.scala 540:22]
    node _T_630 = not(d_first) @[Monitor.scala 541:22]
    node _T_631 = and(io_in_d_valid, _T_630) @[Monitor.scala 541:19]
    node _T_632 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_635 = not(_T_632) @[Monitor.scala 49:11]
    node _T_636 = eq(io_in_d_bits_param, param_1) @[Monitor.scala 543:29]
    node _T_639 = not(_T_636) @[Monitor.scala 49:11]
    node _T_640 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_643 = not(_T_640) @[Monitor.scala 49:11]
    node _T_644 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_647 = not(_T_644) @[Monitor.scala 49:11]
    node _T_648 = eq(io_in_d_bits_sink, sink) @[Monitor.scala 546:29]
    node _T_651 = not(_T_648) @[Monitor.scala 49:11]
    node _T_652 = eq(io_in_d_bits_denied, denied) @[Monitor.scala 547:29]
    node _T_655 = not(_T_652) @[Monitor.scala 49:11]
    node _T_657 = and(_d_first_T, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<16>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = eq(a_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, a_first_beats1, a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(_a_first_T, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = eq(d_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, d_first_beats1, d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(_d_first_T, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 7) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 64) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 64) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 64) @[Monitor.scala 638:144]
    node _T_658 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node _T_661 = and(_a_first_T, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 7) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_661, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_661, _a_sizes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_663 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_664 = bits(_T_663, 0, 0) @[Monitor.scala 658:26]
    node _T_665 = not(_T_664) @[Monitor.scala 658:17]
    node _T_668 = not(_T_665) @[Monitor.scala 42:11]
    node a_set = mux(_T_661, _a_set_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_661, _a_opcodes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_661, _a_sizes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_669 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_671 = not(_T_465) @[Monitor.scala 671:74]
    node _T_672 = and(_T_669, _T_671) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node _T_674 = and(_d_first_T, d_first_1) @[Monitor.scala 675:27]
    node _T_677 = and(_T_674, _T_671) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_677, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_677, _d_opcodes_clr_T_5, UInt<143>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_658, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_682 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_683 = bits(_T_682, 0, 0) @[Monitor.scala 682:25]
    node _T_684 = or(_T_683, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_687 = not(_T_684) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_688 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_689 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_690 = or(_T_688, _T_689) @[Monitor.scala 685:77]
    node _T_693 = not(_T_690) @[Monitor.scala 49:11]
    node _T_694 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_697 = not(_T_694) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_698 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_698), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_698), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_698), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_698), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_698), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_698), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_699 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_698), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_698), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_701 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_702 = or(_T_699, _T_701) @[Monitor.scala 689:72]
    node _T_705 = not(_T_702) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_706 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_709 = not(_T_706) @[Monitor.scala 49:11]
    node _T_711 = and(_T_669, a_first_1) @[Monitor.scala 694:36]
    node _T_712 = and(_T_711, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_714 = and(_T_712, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_716 = and(_T_714, _T_671) @[Monitor.scala 694:116]
    node _T_717 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_718 = or(_T_717, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_721 = not(_T_718) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 63, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 63, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 63, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_722 = orr(inflight) @[Monitor.scala 709:26]
    node _T_723 = not(_T_722) @[Monitor.scala 709:16]
    node _T_724 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_725 = or(_T_723, _T_724) @[Monitor.scala 709:30]
    node _T_726 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_727 = or(_T_725, _T_726) @[Monitor.scala 709:47]
    node _T_730 = not(_T_727) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_733 = or(_a_first_T, _d_first_T) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_733, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_1 : UInt<16>, clock with :
      reset => (UInt<1>("h0"), inflight_1) @[Monitor.scala 723:35]
    reg inflight_sizes_1 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = eq(d_first_counter_2, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, d_first_beats1, d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(_d_first_T, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_opcode_lookup_T) @[Monitor.scala 747:42]
    node _c_size_lookup_T_6 = and(_c_size_lookup_T_1, _GEN_73) @[Monitor.scala 747:93]
    node _GEN_88 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_88, 64) @[Monitor.scala 747:146]
    node _T_746 = bits(inflight_1, 0, 0) @[Monitor.scala 766:26]
    node _T_747 = not(_T_746) @[Monitor.scala 766:17]
    node _T_751 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_753 = and(_T_751, _T_465) @[Monitor.scala 779:71]
    node _T_755 = and(_d_first_T, d_first_2) @[Monitor.scala 783:27]
    node _T_757 = and(_T_755, _T_465) @[Monitor.scala 783:72]
    node d_clr_1 = mux(_T_757, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 783:90 784:21]
    node _GEN_68 = mux(_T_757, _d_opcodes_clr_T_5, UInt<143>("h0")) @[Monitor.scala 783:90 785:21]
    node _T_761 = dshr(inflight_1, io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_762 = bits(_T_761, 0, 0) @[Monitor.scala 791:25]
    node _T_766 = not(_T_762) @[Monitor.scala 49:11]
    node _T_767 = eq(io_in_d_bits_size, UInt<3>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 3, 0)
    node _T_771 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    node _T_774 = not(_T_771) @[Monitor.scala 49:11]
    node _inflight_T_4 = not(d_clr_1) @[Monitor.scala 809:46]
    node _inflight_T_5 = and(inflight_1, _inflight_T_4) @[Monitor.scala 809:44]
    node d_opcodes_clr_1 = bits(_GEN_68, 63, 0)
    node _inflight_opcodes_T_4 = not(d_opcodes_clr_1) @[Monitor.scala 810:62]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_opcodes_T_4) @[Monitor.scala 811:56]
    reg watchdog_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog_1) @[Monitor.scala 813:27]
    node _T_786 = orr(inflight_1) @[Monitor.scala 816:26]
    node _T_787 = not(_T_786) @[Monitor.scala 816:16]
    node _T_788 = eq(plusarg_reader_1.out, UInt<32>("h0")) @[Monitor.scala 816:39]
    node _T_789 = or(_T_787, _T_788) @[Monitor.scala 816:30]
    node _T_790 = lt(watchdog_1, plusarg_reader_1.out) @[Monitor.scala 816:59]
    node _T_791 = or(_T_789, _T_790) @[Monitor.scala 816:47]
    node _T_794 = not(_T_791) @[Monitor.scala 42:11]
    node _watchdog_T_2 = add(watchdog_1, UInt<32>("h1")) @[Monitor.scala 818:26]
    node _watchdog_T_3 = tail(_watchdog_T_2, 1) @[Monitor.scala 818:26]
    node _GEN_70 = mux(_d_first_T, UInt<32>("h0"), _watchdog_T_3) @[Monitor.scala 818:14 819:{47,58}]
    a_first_counter <= mux(reset, UInt<3>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_629, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_629, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_629, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_629, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_629, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<3>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_657, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    param_1 <= mux(_T_657, io_in_d_bits_param, param_1) @[Monitor.scala 549:32 551:15 536:22]
    size_1 <= mux(_T_657, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_657, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    sink <= mux(_T_657, io_in_d_bits_sink, sink) @[Monitor.scala 549:32 554:15 539:22]
    denied <= mux(_T_657, io_in_d_bits_denied, denied) @[Monitor.scala 549:32 555:15 540:22]
    inflight <= mux(reset, UInt<16>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<64>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<64>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_1 <= mux(reset, UInt<16>("h0"), _inflight_T_5) @[Monitor.scala 723:{35,35} 809:22]
    inflight_sizes_1 <= mux(reset, UInt<64>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<3>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    watchdog_1 <= mux(reset, UInt<32>("h0"), _GEN_70) @[Monitor.scala 813:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_80), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_81), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_84), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_86), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_89), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_90), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_93), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_94) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_80), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_81), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_84), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_159), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_162), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_86), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_89), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_90), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_93), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_172) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_202), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_206), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_80), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_213), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_216), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_217), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_220), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_90), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_93), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_225) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_246), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_154 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_259), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_80), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_213), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_216), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_217), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_220), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_165 = and(io_in_a_valid, _T_274) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_246), and(_GEN_165, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_167 = and(_GEN_165, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_259), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_165, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_165, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_80), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_213), and(_GEN_165, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_216), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_321), and(_GEN_165, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_324), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_178 = and(io_in_a_valid, _T_325) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_178, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_178, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_178, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_178, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_183 = and(_GEN_178, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_80), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_361), and(_GEN_178, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_364), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_217), and(_GEN_178, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_220), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_190 = and(io_in_a_valid, _T_369) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_190, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_190, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_190, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_190, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_195 = and(_GEN_190, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_80), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_405), and(_GEN_190, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_408), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_217), and(_GEN_190, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_220), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_202 = and(io_in_a_valid, _T_413) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_202, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_202, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_202, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_202, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_207 = and(_GEN_202, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_80), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_449), and(_GEN_202, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_452), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_217), and(_GEN_202, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_220), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_90), and(_GEN_202, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_93), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_461), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_217 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_217, _T_464), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_218 = and(io_in_d_valid, _T_465) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_218, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    node _GEN_221 = and(_GEN_218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_472), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_473), and(_GEN_218, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_476), "Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_55 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_477), and(_GEN_218, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_480), "Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_56 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_218, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_484), "Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_57 @[Monitor.scala 49:11]
    node _GEN_231 = and(io_in_d_valid, _T_485) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_231, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_231, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_231, _T_2), "Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_231, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    node _GEN_236 = and(_GEN_231, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_472), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_496), and(_GEN_231, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_499), "Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_61 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_500), and(_GEN_231, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_503), "Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_62 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_477), and(_GEN_231, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_480), "Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_63 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_231, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_484), "Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_64 @[Monitor.scala 49:11]
    node _GEN_249 = and(io_in_d_valid, _T_513) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_249, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_249, _T_2), "Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_249, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    node _GEN_254 = and(_GEN_249, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_472), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_496), and(_GEN_249, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_499), "Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_68 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_500), and(_GEN_249, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_503), "Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_69 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_533), and(_GEN_249, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_536), "Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_70 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_249, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_484), "Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_71 @[Monitor.scala 49:11]
    node _GEN_267 = and(io_in_d_valid, _T_542) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_267, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_473), and(_GEN_267, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    node _GEN_270 = and(_GEN_267, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_476), "Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_73 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_477), and(_GEN_267, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_480), "Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_74 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_267, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_484), "Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_75 @[Monitor.scala 49:11]
    node _GEN_277 = and(io_in_d_valid, _T_559) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_277, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_473), and(_GEN_277, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    node _GEN_280 = and(_GEN_277, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_476), "Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_77 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_533), and(_GEN_277, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_536), "Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_78 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_277, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_484), "Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_79 @[Monitor.scala 49:11]
    node _GEN_287 = and(io_in_d_valid, _T_577) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_287, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_473), and(_GEN_287, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    node _GEN_290 = and(_GEN_287, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_476), "Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_81 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_477), and(_GEN_287, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_480), "Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_82 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_481), and(_GEN_287, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_484), "Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_608), and(_T_607, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_297 = and(_T_607, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_611), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_612), and(_T_607, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_615), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_616), and(_T_607, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_619), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_620), and(_T_607, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_623), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_624), and(_T_607, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_627), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_632), and(_T_631, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_302 = and(_T_631, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_635), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_636), and(_T_631, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_639), "Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_640), and(_T_631, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_643), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_644), and(_T_631, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_647), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_648), and(_T_631, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_651), "Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_96 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_652), and(_T_631, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_655), "Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_665), and(_T_661, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_308 = and(_T_661, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_308, _T_668), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_684), and(_T_672, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_309 = and(_T_672, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_309, _T_687), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_310 = and(_T_672, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_690), and(_GEN_310, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_312 = and(_GEN_310, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_693), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_694), and(_GEN_310, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_697), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_316 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_317 = and(_T_672, _GEN_316) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_702), and(_GEN_317, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_320 = and(_GEN_317, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_705), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_706), and(_GEN_317, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_709), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_718), and(_T_716, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_326 = and(_T_716, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_326, _T_721), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_727), _T_2), 1) : assert_105 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_730), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_105 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_762), and(_T_753, _T_2)), 1) : assert_107 @[Monitor.scala 49:11]
    node _GEN_327 = and(_T_753, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_766), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_107 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_771), and(_T_753, _T_2)), 1) : assert_109 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_774), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_109 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_791), _T_2), 1) : assert_111 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_794), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_111 @[Monitor.scala 42:11]

  module TLXbar_11_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<3>
    input auto_in_a_bits_source : UInt<4>
    input auto_in_a_bits_address : UInt<29>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_data : UInt<64>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_opcode : UInt<3>
    output auto_in_d_bits_param : UInt<2>
    output auto_in_d_bits_size : UInt<3>
    output auto_in_d_bits_source : UInt<4>
    output auto_in_d_bits_sink : UInt<1>
    output auto_in_d_bits_denied : UInt<1>
    output auto_in_d_bits_data : UInt<64>
    output auto_in_d_bits_corrupt : UInt<1>
    input auto_out_1_a_ready : UInt<1>
    output auto_out_1_a_valid : UInt<1>
    output auto_out_1_a_bits_opcode : UInt<3>
    output auto_out_1_a_bits_param : UInt<3>
    output auto_out_1_a_bits_size : UInt<3>
    output auto_out_1_a_bits_source : UInt<4>
    output auto_out_1_a_bits_address : UInt<18>
    output auto_out_1_a_bits_mask : UInt<8>
    output auto_out_1_a_bits_corrupt : UInt<1>
    output auto_out_1_d_ready : UInt<1>
    input auto_out_1_d_valid : UInt<1>
    input auto_out_1_d_bits_size : UInt<3>
    input auto_out_1_d_bits_source : UInt<4>
    input auto_out_1_d_bits_data : UInt<64>
    input auto_out_0_a_ready : UInt<1>
    output auto_out_0_a_valid : UInt<1>
    output auto_out_0_a_bits_opcode : UInt<3>
    output auto_out_0_a_bits_param : UInt<3>
    output auto_out_0_a_bits_size : UInt<3>
    output auto_out_0_a_bits_source : UInt<4>
    output auto_out_0_a_bits_address : UInt<29>
    output auto_out_0_a_bits_mask : UInt<8>
    output auto_out_0_a_bits_data : UInt<64>
    output auto_out_0_a_bits_corrupt : UInt<1>
    output auto_out_0_d_ready : UInt<1>
    input auto_out_0_d_valid : UInt<1>
    input auto_out_0_d_bits_opcode : UInt<3>
    input auto_out_0_d_bits_param : UInt<2>
    input auto_out_0_d_bits_size : UInt<3>
    input auto_out_0_d_bits_source : UInt<4>
    input auto_out_0_d_bits_sink : UInt<1>
    input auto_out_0_d_bits_denied : UInt<1>
    input auto_out_0_d_bits_data : UInt<64>
    input auto_out_0_d_bits_corrupt : UInt<1>

    inst monitor of TLMonitor_66_inTestHarness @[Nodes.scala 24:25]
    reg beatsLeft : UInt<3>, clock with :
      reset => (UInt<1>("h0"), beatsLeft) @[Arbiter.scala 87:30]
    node idle = eq(beatsLeft, UInt<3>("h0")) @[Arbiter.scala 88:28]
    node readys_valid = cat(auto_out_1_d_valid, auto_out_0_d_valid) @[Cat.scala 31:58]
    reg readys_mask : UInt<2>, clock with :
      reset => (UInt<1>("h0"), readys_mask) @[Arbiter.scala 23:23]
    node _readys_filter_T = not(readys_mask) @[Arbiter.scala 24:30]
    node _readys_filter_T_1 = and(readys_valid, _readys_filter_T) @[Arbiter.scala 24:28]
    node readys_filter = cat(_readys_filter_T_1, readys_valid) @[Cat.scala 31:58]
    node _readys_unready_T = shr(readys_filter, 1) @[package.scala 253:48]
    node _GEN_1 = pad(_readys_unready_T, 4) @[package.scala 253:43]
    node _readys_unready_T_1 = or(readys_filter, _GEN_1) @[package.scala 253:43]
    node _readys_unready_T_3 = shr(_readys_unready_T_1, 1) @[Arbiter.scala 25:52]
    node _readys_unready_T_4 = shl(readys_mask, 2) @[Arbiter.scala 25:66]
    node _GEN_2 = pad(_readys_unready_T_3, 4) @[Arbiter.scala 25:58]
    node readys_unready = or(_GEN_2, _readys_unready_T_4) @[Arbiter.scala 25:58]
    node _readys_readys_T = shr(readys_unready, 2) @[Arbiter.scala 26:29]
    node _readys_readys_T_1 = bits(readys_unready, 1, 0) @[Arbiter.scala 26:48]
    node _readys_readys_T_2 = and(_readys_readys_T, _readys_readys_T_1) @[Arbiter.scala 26:39]
    node readys_readys = not(_readys_readys_T_2) @[Arbiter.scala 26:18]
    node readys_0 = bits(readys_readys, 0, 0) @[Arbiter.scala 95:86]
    node earlyWinner_0 = and(readys_0, auto_out_0_d_valid) @[Arbiter.scala 97:79]
    reg state_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), state_0) @[Arbiter.scala 116:26]
    node muxStateEarly_0 = mux(idle, earlyWinner_0, state_0) @[Arbiter.scala 117:30]
    node _T_36 = mux(muxStateEarly_0, auto_out_0_d_bits_source, UInt<4>("h0")) @[Mux.scala 27:73]
    node readys_1 = bits(readys_readys, 1, 1) @[Arbiter.scala 95:86]
    node earlyWinner_1 = and(readys_1, auto_out_1_d_valid) @[Arbiter.scala 97:79]
    reg state_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), state_1) @[Arbiter.scala 116:26]
    node muxStateEarly_1 = mux(idle, earlyWinner_1, state_1) @[Arbiter.scala 117:30]
    node _T_37 = mux(muxStateEarly_1, auto_out_1_d_bits_source, UInt<4>("h0")) @[Mux.scala 27:73]
    node _requestAIO_T = xor(auto_in_a_bits_address, UInt<29>("h10000000")) @[Parameters.scala 137:31]
    node _requestAIO_T_1 = cvt(_requestAIO_T) @[Parameters.scala 137:49]
    node _requestAIO_T_2 = and(_requestAIO_T_1, SInt<30>("h10000000")) @[Parameters.scala 137:52]
    node _requestAIO_T_3 = asSInt(_requestAIO_T_2) @[Parameters.scala 137:52]
    node requestAIO_0_0 = eq(_requestAIO_T_3, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _requestAIO_T_6 = cvt(auto_in_a_bits_address) @[Parameters.scala 137:49]
    node _requestAIO_T_7 = and(_requestAIO_T_6, SInt<30>("h10000000")) @[Parameters.scala 137:52]
    node _requestAIO_T_8 = asSInt(_requestAIO_T_7) @[Parameters.scala 137:52]
    node requestAIO_0_1 = eq(_requestAIO_T_8, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _beatsDO_decode_T_1 = dshl(UInt<6>("h3f"), auto_out_0_d_bits_size) @[package.scala 234:77]
    node _beatsDO_decode_T_2 = bits(_beatsDO_decode_T_1, 5, 0) @[package.scala 234:82]
    node _beatsDO_decode_T_3 = not(_beatsDO_decode_T_2) @[package.scala 234:46]
    node beatsDO_decode = shr(_beatsDO_decode_T_3, 3) @[Edges.scala 219:59]
    node beatsDO_opdata = bits(auto_out_0_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node beatsDO_0 = mux(beatsDO_opdata, beatsDO_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    node _beatsDO_decode_T_5 = dshl(UInt<6>("h3f"), auto_out_1_d_bits_size) @[package.scala 234:77]
    node _beatsDO_decode_T_6 = bits(_beatsDO_decode_T_5, 5, 0) @[package.scala 234:82]
    node _beatsDO_decode_T_7 = not(_beatsDO_decode_T_6) @[package.scala 234:46]
    node beatsDO_decode_1 = shr(_beatsDO_decode_T_7, 3) @[Edges.scala 219:59]
    node _portsAOI_in_0_a_ready_T = and(requestAIO_0_0, auto_out_0_a_ready) @[Mux.scala 27:73]
    node _portsAOI_in_0_a_ready_T_1 = and(requestAIO_0_1, auto_out_1_a_ready) @[Mux.scala 27:73]
    node latch = and(idle, auto_in_d_ready) @[Arbiter.scala 89:24]
    node _readys_T_3 = not(reset) @[Arbiter.scala 22:12]
    node _readys_T_5 = orr(readys_valid) @[Arbiter.scala 27:27]
    node _readys_T_6 = and(latch, _readys_T_5) @[Arbiter.scala 27:18]
    node _readys_mask_T = and(readys_readys, readys_valid) @[Arbiter.scala 28:29]
    node _readys_mask_T_1 = shl(_readys_mask_T, 1) @[package.scala 244:48]
    node _readys_mask_T_2 = bits(_readys_mask_T_1, 1, 0) @[package.scala 244:53]
    node _readys_mask_T_3 = or(_readys_mask_T, _readys_mask_T_2) @[package.scala 244:43]
    node _GEN_0 = mux(_readys_T_6, _readys_mask_T_3, readys_mask) @[Arbiter.scala 27:32 28:12 23:23]
    node _prefixOR_T = or(earlyWinner_0, earlyWinner_1) @[Arbiter.scala 104:53]
    node _T_1 = not(earlyWinner_0) @[Arbiter.scala 105:67]
    node _T_4 = not(earlyWinner_1) @[Arbiter.scala 105:67]
    node _T_5 = or(_T_1, _T_4) @[Arbiter.scala 105:64]
    node _T_9 = not(_T_5) @[Arbiter.scala 105:13]
    node _T_10 = or(auto_out_0_d_valid, auto_out_1_d_valid) @[Arbiter.scala 107:36]
    node _T_11 = not(_T_10) @[Arbiter.scala 107:15]
    node _T_13 = or(_T_11, _prefixOR_T) @[Arbiter.scala 107:41]
    node _T_16 = not(_T_13) @[Arbiter.scala 107:14]
    node _T_20 = or(_T_11, _T_10) @[Arbiter.scala 108:41]
    node _T_23 = not(_T_20) @[Arbiter.scala 108:14]
    node maskedBeats_0 = mux(earlyWinner_0, beatsDO_0, UInt<3>("h0")) @[Arbiter.scala 111:73]
    node maskedBeats_1 = mux(earlyWinner_1, beatsDO_decode_1, UInt<3>("h0")) @[Arbiter.scala 111:73]
    node initBeats = or(maskedBeats_0, maskedBeats_1) @[Arbiter.scala 112:44]
    node _sink_ACancel_earlyValid_T_1 = and(state_0, auto_out_0_d_valid) @[Mux.scala 27:73]
    node _sink_ACancel_earlyValid_T_2 = and(state_1, auto_out_1_d_valid) @[Mux.scala 27:73]
    node _sink_ACancel_earlyValid_T_3 = or(_sink_ACancel_earlyValid_T_1, _sink_ACancel_earlyValid_T_2) @[Mux.scala 27:73]
    node sink_ACancel_5_earlyValid = mux(idle, _T_10, _sink_ACancel_earlyValid_T_3) @[Arbiter.scala 125:29]
    node _beatsLeft_T_2 = and(auto_in_d_ready, sink_ACancel_5_earlyValid) @[ReadyValidCancel.scala 49:33]
    node _GEN_3 = pad(_beatsLeft_T_2, 3) @[Arbiter.scala 113:52]
    node _beatsLeft_T_3 = sub(beatsLeft, _GEN_3) @[Arbiter.scala 113:52]
    node _beatsLeft_T_4 = tail(_beatsLeft_T_3, 1) @[Arbiter.scala 113:52]
    node _beatsLeft_T_5 = mux(latch, initBeats, _beatsLeft_T_4) @[Arbiter.scala 113:23]
    node allowed_0 = mux(idle, readys_0, state_0) @[Arbiter.scala 121:24]
    node allowed_1 = mux(idle, readys_1, state_1) @[Arbiter.scala 121:24]
    node _T_27 = mux(muxStateEarly_0, auto_out_0_d_bits_data, UInt<64>("h0")) @[Mux.scala 27:73]
    node _T_28 = mux(muxStateEarly_1, auto_out_1_d_bits_data, UInt<64>("h0")) @[Mux.scala 27:73]
    node _T_39 = mux(muxStateEarly_0, auto_out_0_d_bits_size, UInt<3>("h0")) @[Mux.scala 27:73]
    node _T_40 = mux(muxStateEarly_1, auto_out_1_d_bits_size, UInt<3>("h0")) @[Mux.scala 27:73]
    node _T_45 = mux(muxStateEarly_0, auto_out_0_d_bits_opcode, UInt<3>("h0")) @[Mux.scala 27:73]
    node _T_46 = mux(muxStateEarly_1, UInt<3>("h1"), UInt<3>("h0")) @[Mux.scala 27:73]
    auto_in_a_ready <= or(_portsAOI_in_0_a_ready_T, _portsAOI_in_0_a_ready_T_1) @[Mux.scala 27:73]
    auto_in_d_valid <= mux(idle, _T_10, _sink_ACancel_earlyValid_T_3) @[Arbiter.scala 125:29]
    auto_in_d_bits_opcode <= or(_T_45, _T_46) @[Mux.scala 27:73]
    auto_in_d_bits_param <= mux(muxStateEarly_0, auto_out_0_d_bits_param, UInt<2>("h0")) @[Mux.scala 27:73]
    auto_in_d_bits_size <= or(_T_39, _T_40) @[Mux.scala 27:73]
    auto_in_d_bits_source <= or(_T_36, _T_37) @[Mux.scala 27:73]
    auto_in_d_bits_sink <= and(muxStateEarly_0, auto_out_0_d_bits_sink) @[Mux.scala 27:73]
    auto_in_d_bits_denied <= and(muxStateEarly_0, auto_out_0_d_bits_denied) @[Mux.scala 27:73]
    auto_in_d_bits_data <= or(_T_27, _T_28) @[Mux.scala 27:73]
    auto_in_d_bits_corrupt <= and(muxStateEarly_0, auto_out_0_d_bits_corrupt) @[Mux.scala 27:73]
    auto_out_1_a_valid <= and(auto_in_a_valid, requestAIO_0_1) @[Xbar.scala 428:50]
    auto_out_1_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_1_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_1_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_1_a_bits_source <= auto_in_a_bits_source @[Xbar.scala 237:55]
    auto_out_1_a_bits_address <= bits(auto_in_a_bits_address, 17, 0) @[Xbar.scala 132:50 BundleMap.scala 247:19]
    auto_out_1_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_1_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_1_d_ready <= and(auto_in_d_ready, allowed_1) @[Arbiter.scala 123:31]
    auto_out_0_a_valid <= and(auto_in_a_valid, requestAIO_0_0) @[Xbar.scala 428:50]
    auto_out_0_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_source <= auto_in_a_bits_source @[Xbar.scala 237:55]
    auto_out_0_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_data <= auto_in_a_bits_data @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_0_d_ready <= and(auto_in_d_ready, allowed_0) @[Arbiter.scala 123:31]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= or(_portsAOI_in_0_a_ready_T, _portsAOI_in_0_a_ready_T_1) @[Mux.scala 27:73]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= mux(idle, _T_10, _sink_ACancel_earlyValid_T_3) @[Arbiter.scala 125:29]
    monitor.io_in_d_bits_opcode <= or(_T_45, _T_46) @[Mux.scala 27:73]
    monitor.io_in_d_bits_param <= mux(muxStateEarly_0, auto_out_0_d_bits_param, UInt<2>("h0")) @[Mux.scala 27:73]
    monitor.io_in_d_bits_size <= or(_T_39, _T_40) @[Mux.scala 27:73]
    monitor.io_in_d_bits_source <= or(_T_36, _T_37) @[Mux.scala 27:73]
    monitor.io_in_d_bits_sink <= and(muxStateEarly_0, auto_out_0_d_bits_sink) @[Mux.scala 27:73]
    monitor.io_in_d_bits_denied <= and(muxStateEarly_0, auto_out_0_d_bits_denied) @[Mux.scala 27:73]
    monitor.io_in_d_bits_corrupt <= and(muxStateEarly_0, auto_out_0_d_bits_corrupt) @[Mux.scala 27:73]
    beatsLeft <= mux(reset, UInt<3>("h0"), _beatsLeft_T_5) @[Arbiter.scala 113:17 87:{30,30}]
    readys_mask <= mux(reset, UInt<2>("h3"), _GEN_0) @[Arbiter.scala 23:{23,23}]
    state_0 <= mux(reset, UInt<1>("h0"), muxStateEarly_0) @[Arbiter.scala 116:{26,26} 119:13]
    state_1 <= mux(reset, UInt<1>("h0"), muxStateEarly_1) @[Arbiter.scala 116:{26,26} 119:13]
    stop(clock, and(not(UInt<1>("h1")), _readys_T_3), 1) : readys_assert @[Arbiter.scala 22:12]
    stop(clock, and(not(_T_5), _readys_T_3), 1) : assert @[Arbiter.scala 105:13]
    printf(clock, and(_readys_T_3, _T_9), "Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n") : printf @[Arbiter.scala 105:13]
    stop(clock, and(not(_T_13), _readys_T_3), 1) : assert_1 @[Arbiter.scala 107:14]
    printf(clock, and(_readys_T_3, _T_16), "Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n") : printf_1 @[Arbiter.scala 107:14]
    stop(clock, and(not(_T_20), _readys_T_3), 1) : assert_2 @[Arbiter.scala 108:14]
    printf(clock, and(_readys_T_3, _T_23), "Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n") : printf_2 @[Arbiter.scala 108:14]

  module TLMonitor_67_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<2>
    input io_in_a_bits_source : UInt<8>
    input io_in_a_bits_address : UInt<29>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_param : UInt<2>
    input io_in_d_bits_size : UInt<2>
    input io_in_d_bits_source : UInt<8>
    input io_in_d_bits_sink : UInt<1>
    input io_in_d_bits_denied : UInt<1>
    input io_in_d_bits_corrupt : UInt<1>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<3>("h7"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 2, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 29) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<29>("h0")) @[Edges.scala 20:24]
    node _mask_sizeOH_T = pad(io_in_a_bits_size, 3) @[Misc.scala 201:34]
    node mask_sizeOH_shiftAmount = bits(_mask_sizeOH_T, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<2>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<29>("h10000000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<30>("h-1000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _T_65 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_68 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_69 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_72 = not(_T_69) @[Monitor.scala 42:11]
    node _T_73 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_74 = eq(_T_73, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_77 = not(_T_74) @[Monitor.scala 42:11]
    node _T_78 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_81 = not(_T_78) @[Monitor.scala 42:11]
    node _T_82 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_135 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_138 = not(_T_135) @[Monitor.scala 42:11]
    node _T_148 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_176 = not(_T_37) @[Monitor.scala 42:11]
    node _T_183 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_186 = not(_T_183) @[Monitor.scala 42:11]
    node _T_187 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_236 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_273 = not(mask) @[Monitor.scala 127:33]
    node _T_274 = and(io_in_a_bits_mask, _T_273) @[Monitor.scala 127:31]
    node _T_275 = eq(_T_274, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_278 = not(_T_275) @[Monitor.scala 42:11]
    node _T_279 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_309 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_312 = not(_T_309) @[Monitor.scala 42:11]
    node _T_317 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_347 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_350 = not(_T_347) @[Monitor.scala 42:11]
    node _T_355 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_385 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_388 = not(_T_385) @[Monitor.scala 42:11]
    node _T_397 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_400 = not(_T_397) @[Monitor.scala 49:11]
    node _T_401 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_405 = geq(io_in_d_bits_size, UInt<2>("h3")) @[Monitor.scala 312:27]
    node _T_408 = not(_T_405) @[Monitor.scala 49:11]
    node _T_409 = eq(io_in_d_bits_param, UInt<2>("h0")) @[Monitor.scala 313:28]
    node _T_412 = not(_T_409) @[Monitor.scala 49:11]
    node _T_413 = not(io_in_d_bits_corrupt) @[Monitor.scala 314:15]
    node _T_416 = not(_T_413) @[Monitor.scala 49:11]
    node _T_417 = not(io_in_d_bits_denied) @[Monitor.scala 315:15]
    node _T_420 = not(_T_417) @[Monitor.scala 49:11]
    node _T_421 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_432 = leq(io_in_d_bits_param, UInt<2>("h2")) @[Bundles.scala 102:26]
    node _T_435 = not(_T_432) @[Monitor.scala 49:11]
    node _T_436 = neq(io_in_d_bits_param, UInt<2>("h2")) @[Monitor.scala 323:28]
    node _T_439 = not(_T_436) @[Monitor.scala 49:11]
    node _T_449 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_469 = or(_T_417, io_in_d_bits_corrupt) @[Monitor.scala 334:30]
    node _T_472 = not(_T_469) @[Monitor.scala 49:11]
    node _T_478 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_495 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_513 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node a_first_done = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    reg a_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = not(a_first_counter) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, UInt<1>("h0"), a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(a_first_done, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<29>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_542 = not(a_first) @[Monitor.scala 389:22]
    node _T_543 = and(io_in_a_valid, _T_542) @[Monitor.scala 389:19]
    node _T_544 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_547 = not(_T_544) @[Monitor.scala 42:11]
    node _T_548 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_551 = not(_T_548) @[Monitor.scala 42:11]
    node _T_552 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_555 = not(_T_552) @[Monitor.scala 42:11]
    node _T_556 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_559 = not(_T_556) @[Monitor.scala 42:11]
    node _T_560 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_563 = not(_T_560) @[Monitor.scala 42:11]
    node _T_565 = and(a_first_done, a_first) @[Monitor.scala 396:20]
    node d_first_done = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    reg d_first_counter : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = not(d_first_counter) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, UInt<1>("h0"), d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(d_first_done, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg param_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), param_1) @[Monitor.scala 536:22]
    reg size_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    reg sink : UInt<1>, clock with :
      reset => (UInt<1>("h0"), sink) @[Monitor.scala 539:22]
    reg denied : UInt<1>, clock with :
      reset => (UInt<1>("h0"), denied) @[Monitor.scala 540:22]
    node _T_566 = not(d_first) @[Monitor.scala 541:22]
    node _T_567 = and(io_in_d_valid, _T_566) @[Monitor.scala 541:19]
    node _T_568 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_571 = not(_T_568) @[Monitor.scala 49:11]
    node _T_572 = eq(io_in_d_bits_param, param_1) @[Monitor.scala 543:29]
    node _T_575 = not(_T_572) @[Monitor.scala 49:11]
    node _T_576 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_579 = not(_T_576) @[Monitor.scala 49:11]
    node _T_580 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_583 = not(_T_580) @[Monitor.scala 49:11]
    node _T_584 = eq(io_in_d_bits_sink, sink) @[Monitor.scala 546:29]
    node _T_587 = not(_T_584) @[Monitor.scala 49:11]
    node _T_588 = eq(io_in_d_bits_denied, denied) @[Monitor.scala 547:29]
    node _T_591 = not(_T_588) @[Monitor.scala 49:11]
    node _T_593 = and(d_first_done, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<256>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = not(a_first_counter_1) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, UInt<1>("h0"), a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(a_first_done, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = not(d_first_counter_1) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, UInt<1>("h0"), d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(d_first_done, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 11) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 1024) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 1024) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 1024) @[Monitor.scala 638:144]
    node _T_594 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node a_set_wo_ready = mux(_T_594, _a_set_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 648:71 649:22]
    node _T_597 = and(a_first_done, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<3>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 11) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_597, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_597, _a_sizes_set_interm_T_1, UInt<3>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_599 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_600 = bits(_T_599, 0, 0) @[Monitor.scala 658:26]
    node _T_601 = not(_T_600) @[Monitor.scala 658:17]
    node _T_604 = not(_T_601) @[Monitor.scala 42:11]
    node a_set = mux(_T_597, _a_set_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_597, _a_opcodes_set_T_1, UInt<2051>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_597, _a_sizes_set_T_1, UInt<2050>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_605 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_607 = not(_T_401) @[Monitor.scala 671:74]
    node _T_608 = and(_T_605, _T_607) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node d_clr_wo_ready = mux(_T_608, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 671:90 672:22]
    node _T_610 = and(d_first_done, d_first_1) @[Monitor.scala 675:27]
    node _T_613 = and(_T_610, _T_607) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_613, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_613, _d_opcodes_clr_T_5, UInt<2063>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_594, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_618 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_619 = bits(_T_618, 0, 0) @[Monitor.scala 682:25]
    node _T_620 = or(_T_619, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_623 = not(_T_620) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_624 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_625 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_626 = or(_T_624, _T_625) @[Monitor.scala 685:77]
    node _T_629 = not(_T_626) @[Monitor.scala 49:11]
    node _T_630 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_633 = not(_T_630) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_634 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_634), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_634), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_634), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_634), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_635 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_637 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_638 = or(_T_635, _T_637) @[Monitor.scala 689:72]
    node _T_641 = not(_T_638) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_642 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_645 = not(_T_642) @[Monitor.scala 49:11]
    node _T_647 = and(_T_605, a_first_1) @[Monitor.scala 694:36]
    node _T_648 = and(_T_647, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_650 = and(_T_648, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_652 = and(_T_650, _T_607) @[Monitor.scala 694:116]
    node _T_653 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_654 = or(_T_653, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_657 = not(_T_654) @[Monitor.scala 49:11]
    node _T_658 = neq(a_set_wo_ready, d_clr_wo_ready) @[Monitor.scala 699:29]
    node _T_659 = orr(a_set_wo_ready) @[Monitor.scala 699:67]
    node _T_660 = not(_T_659) @[Monitor.scala 699:51]
    node _T_661 = or(_T_658, _T_660) @[Monitor.scala 699:48]
    node _T_664 = not(_T_661) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 1023, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 1023, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 1023, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_665 = orr(inflight) @[Monitor.scala 709:26]
    node _T_666 = not(_T_665) @[Monitor.scala 709:16]
    node _T_667 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_668 = or(_T_666, _T_667) @[Monitor.scala 709:30]
    node _T_669 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_670 = or(_T_668, _T_669) @[Monitor.scala 709:47]
    node _T_673 = not(_T_670) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_676 = or(a_first_done, d_first_done) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_676, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_1 : UInt<256>, clock with :
      reset => (UInt<1>("h0"), inflight_1) @[Monitor.scala 723:35]
    reg inflight_sizes_1 : UInt<1024>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<1>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = not(d_first_counter_2) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, UInt<1>("h0"), d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(d_first_done, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_opcode_lookup_T) @[Monitor.scala 747:42]
    node _c_size_lookup_T_6 = and(_c_size_lookup_T_1, _GEN_73) @[Monitor.scala 747:93]
    node _GEN_88 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_88, 1024) @[Monitor.scala 747:146]
    node _T_689 = bits(inflight_1, 0, 0) @[Monitor.scala 766:26]
    node _T_690 = not(_T_689) @[Monitor.scala 766:17]
    node _T_694 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_696 = and(_T_694, _T_401) @[Monitor.scala 779:71]
    node d_clr_wo_ready_1 = mux(_T_696, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 779:89 780:22]
    node _T_698 = and(d_first_done, d_first_2) @[Monitor.scala 783:27]
    node _T_700 = and(_T_698, _T_401) @[Monitor.scala 783:72]
    node d_clr_1 = mux(_T_700, _d_clr_wo_ready_T, UInt<256>("h0")) @[Monitor.scala 783:90 784:21]
    node _GEN_68 = mux(_T_700, _d_opcodes_clr_T_5, UInt<2063>("h0")) @[Monitor.scala 783:90 785:21]
    node _T_704 = dshr(inflight_1, io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_705 = bits(_T_704, 0, 0) @[Monitor.scala 791:25]
    node _T_709 = not(_T_705) @[Monitor.scala 49:11]
    node _T_710 = eq(io_in_d_bits_size, UInt<2>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 3, 0)
    node _T_714 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    node _T_717 = not(_T_714) @[Monitor.scala 49:11]
    node _T_730 = neq(UInt<256>("h0"), d_clr_wo_ready_1) @[Monitor.scala 805:31]
    node _inflight_T_4 = not(d_clr_1) @[Monitor.scala 809:46]
    node _inflight_T_5 = and(inflight_1, _inflight_T_4) @[Monitor.scala 809:44]
    node d_opcodes_clr_1 = bits(_GEN_68, 1023, 0)
    node _inflight_opcodes_T_4 = not(d_opcodes_clr_1) @[Monitor.scala 810:62]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_opcodes_T_4) @[Monitor.scala 811:56]
    reg watchdog_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog_1) @[Monitor.scala 813:27]
    node _T_734 = orr(inflight_1) @[Monitor.scala 816:26]
    node _T_735 = not(_T_734) @[Monitor.scala 816:16]
    node _T_736 = eq(plusarg_reader_1.out, UInt<32>("h0")) @[Monitor.scala 816:39]
    node _T_737 = or(_T_735, _T_736) @[Monitor.scala 816:30]
    node _T_738 = lt(watchdog_1, plusarg_reader_1.out) @[Monitor.scala 816:59]
    node _T_739 = or(_T_737, _T_738) @[Monitor.scala 816:47]
    node _T_742 = not(_T_739) @[Monitor.scala 42:11]
    node _watchdog_T_2 = add(watchdog_1, UInt<32>("h1")) @[Monitor.scala 818:26]
    node _watchdog_T_3 = tail(_watchdog_T_2, 1) @[Monitor.scala 818:26]
    node _GEN_70 = mux(d_first_done, UInt<32>("h0"), _watchdog_T_3) @[Monitor.scala 818:14 819:{47,58}]
    a_first_counter <= mux(reset, UInt<1>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_565, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_565, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_565, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_565, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_565, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<1>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_593, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    param_1 <= mux(_T_593, io_in_d_bits_param, param_1) @[Monitor.scala 549:32 551:15 536:22]
    size_1 <= mux(_T_593, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_593, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    sink <= mux(_T_593, io_in_d_bits_sink, sink) @[Monitor.scala 549:32 554:15 539:22]
    denied <= mux(_T_593, io_in_d_bits_denied, denied) @[Monitor.scala 549:32 555:15 540:22]
    inflight <= mux(reset, UInt<256>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<1024>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<1024>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<1>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_1 <= mux(reset, UInt<256>("h0"), _inflight_T_5) @[Monitor.scala 723:{35,35} 809:22]
    inflight_sizes_1 <= mux(reset, UInt<1024>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<1>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    watchdog_1 <= mux(reset, UInt<32>("h0"), _GEN_70) @[Monitor.scala 813:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_65), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_68), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_72), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_81), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_82) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_65), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_68), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_72), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_135), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_138), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_81), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_148) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_176), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_68), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_186), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_190), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_81), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_154 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_176), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_68), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_186), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_190), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_165 = and(io_in_a_valid, _T_236) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_37), and(_GEN_165, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_167 = and(_GEN_165, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_176), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_165, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_165, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_68), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_165, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_186), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_275), and(_GEN_165, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_278), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_178 = and(io_in_a_valid, _T_279) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_178, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_178, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_178, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_178, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_183 = and(_GEN_178, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_68), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_309), and(_GEN_178, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_312), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_178, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_190), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_190 = and(io_in_a_valid, _T_317) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_190, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_190, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_190, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_190, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_195 = and(_GEN_190, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_68), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_347), and(_GEN_190, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_350), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_190, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_190), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_202 = and(io_in_a_valid, _T_355) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_202, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_202, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_202, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_202, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_207 = and(_GEN_202, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_68), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_385), and(_GEN_202, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_388), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_202, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_190), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_202, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_81), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_397), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_217 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_217, _T_400), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_218 = and(io_in_d_valid, _T_401) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_218, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    node _GEN_221 = and(_GEN_218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_408), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_218, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_412), "Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_55 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_218, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_416), "Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_56 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_218, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_420), "Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_57 @[Monitor.scala 49:11]
    node _GEN_231 = and(io_in_d_valid, _T_421) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_231, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_231, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_231, _T_2), "Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_231, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    node _GEN_236 = and(_GEN_231, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_408), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_432), and(_GEN_231, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_435), "Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_61 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_436), and(_GEN_231, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_439), "Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_62 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_231, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_416), "Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_63 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_231, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_420), "Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_64 @[Monitor.scala 49:11]
    node _GEN_249 = and(io_in_d_valid, _T_449) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_249, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_249, _T_2), "Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_249, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    node _GEN_254 = and(_GEN_249, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_408), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_432), and(_GEN_249, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_435), "Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_68 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_436), and(_GEN_249, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_439), "Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_69 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_249, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_472), "Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_70 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_249, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_420), "Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_71 @[Monitor.scala 49:11]
    node _GEN_267 = and(io_in_d_valid, _T_478) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_267, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_267, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    node _GEN_270 = and(_GEN_267, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_412), "Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_73 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_267, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_416), "Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_74 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_267, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_420), "Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_75 @[Monitor.scala 49:11]
    node _GEN_277 = and(io_in_d_valid, _T_495) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_277, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_277, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    node _GEN_280 = and(_GEN_277, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_412), "Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_77 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_277, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_472), "Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_78 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_277, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_420), "Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_79 @[Monitor.scala 49:11]
    node _GEN_287 = and(io_in_d_valid, _T_513) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_287, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_287, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    node _GEN_290 = and(_GEN_287, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_412), "Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_81 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_287, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_416), "Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_82 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_287, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_420), "Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_544), and(_T_543, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_297 = and(_T_543, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_547), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_548), and(_T_543, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_551), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_552), and(_T_543, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_555), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_556), and(_T_543, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_559), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_560), and(_T_543, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_563), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_568), and(_T_567, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_302 = and(_T_567, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_571), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_572), and(_T_567, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_575), "Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_576), and(_T_567, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_579), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_580), and(_T_567, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_583), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_584), and(_T_567, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_587), "Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_96 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_588), and(_T_567, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_591), "Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_601), and(_T_597, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_308 = and(_T_597, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_308, _T_604), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_620), and(_T_608, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_309 = and(_T_608, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_309, _T_623), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_310 = and(_T_608, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_626), and(_GEN_310, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_312 = and(_GEN_310, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_629), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_630), and(_GEN_310, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_633), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_316 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_317 = and(_T_608, _GEN_316) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_638), and(_GEN_317, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_320 = and(_GEN_317, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_641), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_642), and(_GEN_317, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_645), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_654), and(_T_652, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_326 = and(_T_652, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_326, _T_657), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_661), _T_2), 1) : assert_105 @[Monitor.scala 49:11]
    printf(clock, and(_T_2, _T_664), "Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_105 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_670), _T_2), 1) : assert_106 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_673), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_106 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_705), and(_T_696, _T_2)), 1) : assert_108 @[Monitor.scala 49:11]
    node _GEN_327 = and(_T_696, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_709), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_108 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_714), and(_T_696, _T_2)), 1) : assert_110 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_717), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_110 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_739), _T_2), 1) : assert_113 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_742), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_113 @[Monitor.scala 42:11]

  module Queue_46_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_param : UInt<3>
    input io_enq_bits_size : UInt<2>
    input io_enq_bits_source : UInt<8>
    input io_enq_bits_address : UInt<29>
    input io_enq_bits_mask : UInt<8>
    input io_enq_bits_data : UInt<64>
    input io_enq_bits_corrupt : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<3>
    output io_deq_bits_size : UInt<2>
    output io_deq_bits_source : UInt<8>
    output io_deq_bits_address : UInt<29>
    output io_deq_bits_mask : UInt<8>
    output io_deq_bits_data : UInt<64>
    output io_deq_bits_corrupt : UInt<1>

    mem ram_opcode : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_param : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_size : @[Decoupled.scala 259:95]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_source : @[Decoupled.scala 259:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_address : @[Decoupled.scala 259:95]
      data-type => UInt<29>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_mask : @[Decoupled.scala 259:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_data : @[Decoupled.scala 259:95]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_corrupt : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 62:40]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
    node _empty_T = not(maybe_full) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    node _GEN_12 = mux(do_enq, _value_T_1, value) @[Decoupled.scala 272:16 Counter.scala 78:15 62:40]
    node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_13 = mux(do_deq, _value_T_3, value_1) @[Decoupled.scala 276:16 Counter.scala 78:15 62:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    node _GEN_14 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 279:27 280:16 262:27]
    io_enq_ready <= not(full) @[Decoupled.scala 289:19]
    io_deq_valid <= not(empty) @[Decoupled.scala 288:19]
    io_deq_bits_opcode <= ram_opcode.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_param <= ram_param.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_size <= ram_size.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_source <= ram_source.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_address <= ram_address.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_mask <= ram_mask.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_data <= ram_data.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_corrupt <= ram_corrupt.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    ram_opcode.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_address.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_mask.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_opcode.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_address.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_mask.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_param.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_size.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_source.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_address.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_mask.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_data.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_corrupt.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_opcode.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_address.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_mask.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.data <= io_enq_bits_opcode @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.data <= io_enq_bits_param @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.data <= io_enq_bits_size @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.data <= io_enq_bits_source @[Decoupled.scala 272:16 273:24]
    ram_address.MPORT.data <= io_enq_bits_address @[Decoupled.scala 272:16 273:24]
    ram_mask.MPORT.data <= io_enq_bits_mask @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.data <= io_enq_bits_data @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.data <= io_enq_bits_corrupt @[Decoupled.scala 272:16 273:24]
    ram_opcode.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_address.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_mask.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    value <= mux(reset, UInt<1>("h0"), _GEN_12) @[Counter.scala 62:{40,40}]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Counter.scala 62:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_14) @[Decoupled.scala 262:{27,27}]

  module Queue_47_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_size : UInt<2>
    input io_enq_bits_source : UInt<8>
    input io_enq_bits_data : UInt<64>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<2>
    output io_deq_bits_size : UInt<2>
    output io_deq_bits_source : UInt<8>
    output io_deq_bits_sink : UInt<1>
    output io_deq_bits_denied : UInt<1>
    output io_deq_bits_data : UInt<64>
    output io_deq_bits_corrupt : UInt<1>

    mem ram_opcode : @[Decoupled.scala 259:95]
      data-type => UInt<3>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_param : @[Decoupled.scala 259:95]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_size : @[Decoupled.scala 259:95]
      data-type => UInt<2>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_source : @[Decoupled.scala 259:95]
      data-type => UInt<8>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_sink : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_denied : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_data : @[Decoupled.scala 259:95]
      data-type => UInt<64>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    mem ram_corrupt : @[Decoupled.scala 259:95]
      data-type => UInt<1>
      depth => 2
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg value : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 62:40]
    reg value_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
    node _empty_T = not(maybe_full) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    node _GEN_12 = mux(do_enq, _value_T_1, value) @[Decoupled.scala 272:16 Counter.scala 78:15 62:40]
    node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_13 = mux(do_deq, _value_T_3, value_1) @[Decoupled.scala 276:16 Counter.scala 78:15 62:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    node _GEN_14 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 279:27 280:16 262:27]
    io_enq_ready <= not(full) @[Decoupled.scala 289:19]
    io_deq_valid <= not(empty) @[Decoupled.scala 288:19]
    io_deq_bits_opcode <= ram_opcode.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_param <= ram_param.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_size <= ram_size.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_source <= ram_source.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_sink <= ram_sink.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_denied <= ram_denied.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_data <= ram_data.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    io_deq_bits_corrupt <= ram_corrupt.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    ram_opcode.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.addr <= value_1 @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram_opcode.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_param.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_size.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_source.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_sink.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_denied.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_data.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_corrupt.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram_opcode.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_sink.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_denied.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.addr <= value @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_param.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_size.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_source.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_sink.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_denied.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_data.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_corrupt.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram_opcode.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_param.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_size.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_source.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_sink.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_denied.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_data.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_corrupt.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram_opcode.MPORT.data <= io_enq_bits_opcode @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.data <= UInt<2>("h0") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.data <= io_enq_bits_size @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.data <= io_enq_bits_source @[Decoupled.scala 272:16 273:24]
    ram_sink.MPORT.data <= UInt<1>("h0") @[Decoupled.scala 272:16 273:24]
    ram_denied.MPORT.data <= UInt<1>("h0") @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.data <= io_enq_bits_data @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.data <= UInt<1>("h0") @[Decoupled.scala 272:16 273:24]
    ram_opcode.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_param.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_size.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_source.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_sink.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_denied.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_data.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    ram_corrupt.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    value <= mux(reset, UInt<1>("h0"), _GEN_12) @[Counter.scala 62:{40,40}]
    value_1 <= mux(reset, UInt<1>("h0"), _GEN_13) @[Counter.scala 62:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_14) @[Decoupled.scala 262:{27,27}]

  module TLBuffer_23_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<2>
    input auto_in_a_bits_source : UInt<8>
    input auto_in_a_bits_address : UInt<29>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_data : UInt<64>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_opcode : UInt<3>
    output auto_in_d_bits_param : UInt<2>
    output auto_in_d_bits_size : UInt<2>
    output auto_in_d_bits_source : UInt<8>
    output auto_in_d_bits_sink : UInt<1>
    output auto_in_d_bits_denied : UInt<1>
    output auto_in_d_bits_data : UInt<64>
    output auto_in_d_bits_corrupt : UInt<1>
    input auto_out_a_ready : UInt<1>
    output auto_out_a_valid : UInt<1>
    output auto_out_a_bits_opcode : UInt<3>
    output auto_out_a_bits_param : UInt<3>
    output auto_out_a_bits_size : UInt<2>
    output auto_out_a_bits_source : UInt<8>
    output auto_out_a_bits_address : UInt<29>
    output auto_out_a_bits_mask : UInt<8>
    output auto_out_a_bits_data : UInt<64>
    output auto_out_a_bits_corrupt : UInt<1>
    output auto_out_d_ready : UInt<1>
    input auto_out_d_valid : UInt<1>
    input auto_out_d_bits_opcode : UInt<3>
    input auto_out_d_bits_size : UInt<2>
    input auto_out_d_bits_source : UInt<8>
    input auto_out_d_bits_data : UInt<64>

    inst monitor of TLMonitor_67_inTestHarness @[Nodes.scala 24:25]
    inst bundleOut_0_a_q of Queue_46_inTestHarness @[Decoupled.scala 361:21]
    inst bundleIn_0_d_q of Queue_47_inTestHarness @[Decoupled.scala 361:21]
    auto_in_a_ready <= bundleOut_0_a_q.io_enq_ready @[Nodes.scala 1210:84 Decoupled.scala 365:17]
    auto_in_d_valid <= bundleIn_0_d_q.io_deq_valid @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_opcode <= bundleIn_0_d_q.io_deq_bits_opcode @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_param <= bundleIn_0_d_q.io_deq_bits_param @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_size <= bundleIn_0_d_q.io_deq_bits_size @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_source <= bundleIn_0_d_q.io_deq_bits_source @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_sink <= bundleIn_0_d_q.io_deq_bits_sink @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_denied <= bundleIn_0_d_q.io_deq_bits_denied @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_data <= bundleIn_0_d_q.io_deq_bits_data @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_corrupt <= bundleIn_0_d_q.io_deq_bits_corrupt @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_out_a_valid <= bundleOut_0_a_q.io_deq_valid @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_opcode <= bundleOut_0_a_q.io_deq_bits_opcode @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_param <= bundleOut_0_a_q.io_deq_bits_param @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_size <= bundleOut_0_a_q.io_deq_bits_size @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_source <= bundleOut_0_a_q.io_deq_bits_source @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_address <= bundleOut_0_a_q.io_deq_bits_address @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_mask <= bundleOut_0_a_q.io_deq_bits_mask @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_data <= bundleOut_0_a_q.io_deq_bits_data @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_corrupt <= bundleOut_0_a_q.io_deq_bits_corrupt @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_d_ready <= bundleIn_0_d_q.io_enq_ready @[Nodes.scala 1207:84 Decoupled.scala 365:17]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= bundleOut_0_a_q.io_enq_ready @[Nodes.scala 1210:84 Decoupled.scala 365:17]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= bundleIn_0_d_q.io_deq_valid @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_opcode <= bundleIn_0_d_q.io_deq_bits_opcode @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_param <= bundleIn_0_d_q.io_deq_bits_param @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_size <= bundleIn_0_d_q.io_deq_bits_size @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_source <= bundleIn_0_d_q.io_deq_bits_source @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_sink <= bundleIn_0_d_q.io_deq_bits_sink @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_denied <= bundleIn_0_d_q.io_deq_bits_denied @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_corrupt <= bundleIn_0_d_q.io_deq_bits_corrupt @[Nodes.scala 1210:84 Buffer.scala 38:13]
    bundleOut_0_a_q.clock <= clock
    bundleOut_0_a_q.reset <= reset
    bundleOut_0_a_q.io_enq_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_data <= auto_in_a_bits_data @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_deq_ready <= auto_out_a_ready @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.clock <= clock
    bundleIn_0_d_q.reset <= reset
    bundleIn_0_d_q.io_enq_valid <= auto_out_d_valid @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_opcode <= auto_out_d_bits_opcode @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_size <= auto_out_d_bits_size @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_source <= auto_out_d_bits_source @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_data <= auto_out_d_bits_data @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_deq_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]

  module TLMonitor_68_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<3>
    input io_in_a_bits_source : UInt<4>
    input io_in_a_bits_address : UInt<29>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_param : UInt<2>
    input io_in_d_bits_size : UInt<3>
    input io_in_d_bits_source : UInt<4>
    input io_in_d_bits_sink : UInt<1>
    input io_in_d_bits_denied : UInt<1>
    input io_in_d_bits_corrupt : UInt<1>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<6>("h3f"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 5, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 29) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<29>("h0")) @[Edges.scala 20:24]
    node mask_sizeOH_shiftAmount = bits(io_in_a_bits_size, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<3>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<29>("h10000000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<30>("h-1000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<30>("h0")) @[Parameters.scala 137:67]
    node _T_65 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_68 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_69 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_72 = not(_T_69) @[Monitor.scala 42:11]
    node _T_73 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_74 = eq(_T_73, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_77 = not(_T_74) @[Monitor.scala 42:11]
    node _T_78 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_81 = not(_T_78) @[Monitor.scala 42:11]
    node _T_82 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_135 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_138 = not(_T_135) @[Monitor.scala 42:11]
    node _T_148 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_164 = leq(io_in_a_bits_size, UInt<3>("h6")) @[Parameters.scala 92:42]
    node _T_172 = and(_T_164, _T_37) @[Parameters.scala 670:56]
    node _T_176 = not(_T_172) @[Monitor.scala 42:11]
    node _T_183 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_186 = not(_T_183) @[Monitor.scala 42:11]
    node _T_187 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_236 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_273 = not(mask) @[Monitor.scala 127:33]
    node _T_274 = and(io_in_a_bits_mask, _T_273) @[Monitor.scala 127:31]
    node _T_275 = eq(_T_274, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_278 = not(_T_275) @[Monitor.scala 42:11]
    node _T_279 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_309 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_312 = not(_T_309) @[Monitor.scala 42:11]
    node _T_317 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_347 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_350 = not(_T_347) @[Monitor.scala 42:11]
    node _T_355 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_385 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_388 = not(_T_385) @[Monitor.scala 42:11]
    node _T_397 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_400 = not(_T_397) @[Monitor.scala 49:11]
    node _T_401 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_405 = geq(io_in_d_bits_size, UInt<3>("h3")) @[Monitor.scala 312:27]
    node _T_408 = not(_T_405) @[Monitor.scala 49:11]
    node _T_409 = eq(io_in_d_bits_param, UInt<2>("h0")) @[Monitor.scala 313:28]
    node _T_412 = not(_T_409) @[Monitor.scala 49:11]
    node _T_413 = not(io_in_d_bits_corrupt) @[Monitor.scala 314:15]
    node _T_416 = not(_T_413) @[Monitor.scala 49:11]
    node _T_417 = not(io_in_d_bits_denied) @[Monitor.scala 315:15]
    node _T_420 = not(_T_417) @[Monitor.scala 49:11]
    node _T_421 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_432 = leq(io_in_d_bits_param, UInt<2>("h2")) @[Bundles.scala 102:26]
    node _T_435 = not(_T_432) @[Monitor.scala 49:11]
    node _T_436 = neq(io_in_d_bits_param, UInt<2>("h2")) @[Monitor.scala 323:28]
    node _T_439 = not(_T_436) @[Monitor.scala 49:11]
    node _T_449 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_469 = or(_T_417, io_in_d_bits_corrupt) @[Monitor.scala 334:30]
    node _T_472 = not(_T_469) @[Monitor.scala 49:11]
    node _T_478 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_495 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_513 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node _a_first_T = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    node a_first_beats1_decode = shr(is_aligned_mask, 3) @[Edges.scala 219:59]
    node _a_first_beats1_opdata_T = bits(io_in_a_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node a_first_beats1_opdata = not(_a_first_beats1_opdata_T) @[Edges.scala 91:28]
    node a_first_beats1 = mux(a_first_beats1_opdata, a_first_beats1_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    reg a_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = eq(a_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, a_first_beats1, a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(_a_first_T, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<29>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_542 = not(a_first) @[Monitor.scala 389:22]
    node _T_543 = and(io_in_a_valid, _T_542) @[Monitor.scala 389:19]
    node _T_544 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_547 = not(_T_544) @[Monitor.scala 42:11]
    node _T_548 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_551 = not(_T_548) @[Monitor.scala 42:11]
    node _T_552 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_555 = not(_T_552) @[Monitor.scala 42:11]
    node _T_556 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_559 = not(_T_556) @[Monitor.scala 42:11]
    node _T_560 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_563 = not(_T_560) @[Monitor.scala 42:11]
    node _T_565 = and(_a_first_T, a_first) @[Monitor.scala 396:20]
    node _d_first_T = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    node _d_first_beats1_decode_T_1 = dshl(UInt<6>("h3f"), io_in_d_bits_size) @[package.scala 234:77]
    node _d_first_beats1_decode_T_2 = bits(_d_first_beats1_decode_T_1, 5, 0) @[package.scala 234:82]
    node _d_first_beats1_decode_T_3 = not(_d_first_beats1_decode_T_2) @[package.scala 234:46]
    node d_first_beats1_decode = shr(_d_first_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    node d_first_beats1_opdata = bits(io_in_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node d_first_beats1 = mux(d_first_beats1_opdata, d_first_beats1_decode, UInt<3>("h0")) @[Edges.scala 220:14]
    reg d_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = eq(d_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, d_first_beats1, d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(_d_first_T, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg param_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), param_1) @[Monitor.scala 536:22]
    reg size_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    reg sink : UInt<1>, clock with :
      reset => (UInt<1>("h0"), sink) @[Monitor.scala 539:22]
    reg denied : UInt<1>, clock with :
      reset => (UInt<1>("h0"), denied) @[Monitor.scala 540:22]
    node _T_566 = not(d_first) @[Monitor.scala 541:22]
    node _T_567 = and(io_in_d_valid, _T_566) @[Monitor.scala 541:19]
    node _T_568 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_571 = not(_T_568) @[Monitor.scala 49:11]
    node _T_572 = eq(io_in_d_bits_param, param_1) @[Monitor.scala 543:29]
    node _T_575 = not(_T_572) @[Monitor.scala 49:11]
    node _T_576 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_579 = not(_T_576) @[Monitor.scala 49:11]
    node _T_580 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_583 = not(_T_580) @[Monitor.scala 49:11]
    node _T_584 = eq(io_in_d_bits_sink, sink) @[Monitor.scala 546:29]
    node _T_587 = not(_T_584) @[Monitor.scala 49:11]
    node _T_588 = eq(io_in_d_bits_denied, denied) @[Monitor.scala 547:29]
    node _T_591 = not(_T_588) @[Monitor.scala 49:11]
    node _T_593 = and(_d_first_T, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<16>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = eq(a_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, a_first_beats1, a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(_a_first_T, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = eq(d_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, d_first_beats1, d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(_d_first_T, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 7) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 64) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 64) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 64) @[Monitor.scala 638:144]
    node _T_594 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node a_set_wo_ready = mux(_T_594, _a_set_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 648:71 649:22]
    node _T_597 = and(_a_first_T, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 7) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_597, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_597, _a_sizes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_599 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_600 = bits(_T_599, 0, 0) @[Monitor.scala 658:26]
    node _T_601 = not(_T_600) @[Monitor.scala 658:17]
    node _T_604 = not(_T_601) @[Monitor.scala 42:11]
    node a_set = mux(_T_597, _a_set_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_597, _a_opcodes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_597, _a_sizes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_605 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_607 = not(_T_401) @[Monitor.scala 671:74]
    node _T_608 = and(_T_605, _T_607) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node d_clr_wo_ready = mux(_T_608, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 671:90 672:22]
    node _T_610 = and(_d_first_T, d_first_1) @[Monitor.scala 675:27]
    node _T_613 = and(_T_610, _T_607) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_613, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_613, _d_opcodes_clr_T_5, UInt<143>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_594, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_618 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_619 = bits(_T_618, 0, 0) @[Monitor.scala 682:25]
    node _T_620 = or(_T_619, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_623 = not(_T_620) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_624 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_625 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_626 = or(_T_624, _T_625) @[Monitor.scala 685:77]
    node _T_629 = not(_T_626) @[Monitor.scala 49:11]
    node _T_630 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_633 = not(_T_630) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_634 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_634), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_634), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_634), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_634), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_635 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_634), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_634), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_637 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_638 = or(_T_635, _T_637) @[Monitor.scala 689:72]
    node _T_641 = not(_T_638) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_642 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_645 = not(_T_642) @[Monitor.scala 49:11]
    node _T_647 = and(_T_605, a_first_1) @[Monitor.scala 694:36]
    node _T_648 = and(_T_647, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_650 = and(_T_648, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_652 = and(_T_650, _T_607) @[Monitor.scala 694:116]
    node _T_653 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_654 = or(_T_653, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_657 = not(_T_654) @[Monitor.scala 49:11]
    node _T_658 = neq(a_set_wo_ready, d_clr_wo_ready) @[Monitor.scala 699:29]
    node _T_659 = orr(a_set_wo_ready) @[Monitor.scala 699:67]
    node _T_660 = not(_T_659) @[Monitor.scala 699:51]
    node _T_661 = or(_T_658, _T_660) @[Monitor.scala 699:48]
    node _T_664 = not(_T_661) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 63, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 63, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 63, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_665 = orr(inflight) @[Monitor.scala 709:26]
    node _T_666 = not(_T_665) @[Monitor.scala 709:16]
    node _T_667 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_668 = or(_T_666, _T_667) @[Monitor.scala 709:30]
    node _T_669 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_670 = or(_T_668, _T_669) @[Monitor.scala 709:47]
    node _T_673 = not(_T_670) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_676 = or(_a_first_T, _d_first_T) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_676, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_1 : UInt<16>, clock with :
      reset => (UInt<1>("h0"), inflight_1) @[Monitor.scala 723:35]
    reg inflight_sizes_1 : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = eq(d_first_counter_2, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, d_first_beats1, d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(_d_first_T, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_opcode_lookup_T) @[Monitor.scala 747:42]
    node _c_size_lookup_T_6 = and(_c_size_lookup_T_1, _GEN_73) @[Monitor.scala 747:93]
    node _GEN_88 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_88, 64) @[Monitor.scala 747:146]
    node _T_689 = bits(inflight_1, 0, 0) @[Monitor.scala 766:26]
    node _T_690 = not(_T_689) @[Monitor.scala 766:17]
    node _T_694 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_696 = and(_T_694, _T_401) @[Monitor.scala 779:71]
    node d_clr_wo_ready_1 = mux(_T_696, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 779:89 780:22]
    node _T_698 = and(_d_first_T, d_first_2) @[Monitor.scala 783:27]
    node _T_700 = and(_T_698, _T_401) @[Monitor.scala 783:72]
    node d_clr_1 = mux(_T_700, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 783:90 784:21]
    node _GEN_68 = mux(_T_700, _d_opcodes_clr_T_5, UInt<143>("h0")) @[Monitor.scala 783:90 785:21]
    node _T_704 = dshr(inflight_1, io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_705 = bits(_T_704, 0, 0) @[Monitor.scala 791:25]
    node _T_709 = not(_T_705) @[Monitor.scala 49:11]
    node _T_710 = eq(io_in_d_bits_size, UInt<3>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 3, 0)
    node _T_714 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    node _T_717 = not(_T_714) @[Monitor.scala 49:11]
    node _T_730 = neq(UInt<16>("h0"), d_clr_wo_ready_1) @[Monitor.scala 805:31]
    node _inflight_T_4 = not(d_clr_1) @[Monitor.scala 809:46]
    node _inflight_T_5 = and(inflight_1, _inflight_T_4) @[Monitor.scala 809:44]
    node d_opcodes_clr_1 = bits(_GEN_68, 63, 0)
    node _inflight_opcodes_T_4 = not(d_opcodes_clr_1) @[Monitor.scala 810:62]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_opcodes_T_4) @[Monitor.scala 811:56]
    reg watchdog_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog_1) @[Monitor.scala 813:27]
    node _T_734 = orr(inflight_1) @[Monitor.scala 816:26]
    node _T_735 = not(_T_734) @[Monitor.scala 816:16]
    node _T_736 = eq(plusarg_reader_1.out, UInt<32>("h0")) @[Monitor.scala 816:39]
    node _T_737 = or(_T_735, _T_736) @[Monitor.scala 816:30]
    node _T_738 = lt(watchdog_1, plusarg_reader_1.out) @[Monitor.scala 816:59]
    node _T_739 = or(_T_737, _T_738) @[Monitor.scala 816:47]
    node _T_742 = not(_T_739) @[Monitor.scala 42:11]
    node _watchdog_T_2 = add(watchdog_1, UInt<32>("h1")) @[Monitor.scala 818:26]
    node _watchdog_T_3 = tail(_watchdog_T_2, 1) @[Monitor.scala 818:26]
    node _GEN_70 = mux(_d_first_T, UInt<32>("h0"), _watchdog_T_3) @[Monitor.scala 818:14 819:{47,58}]
    a_first_counter <= mux(reset, UInt<3>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_565, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_565, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_565, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_565, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_565, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<3>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_593, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    param_1 <= mux(_T_593, io_in_d_bits_param, param_1) @[Monitor.scala 549:32 551:15 536:22]
    size_1 <= mux(_T_593, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_593, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    sink <= mux(_T_593, io_in_d_bits_sink, sink) @[Monitor.scala 549:32 554:15 539:22]
    denied <= mux(_T_593, io_in_d_bits_denied, denied) @[Monitor.scala 549:32 555:15 540:22]
    inflight <= mux(reset, UInt<16>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<64>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<64>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_1 <= mux(reset, UInt<16>("h0"), _inflight_T_5) @[Monitor.scala 723:{35,35} 809:22]
    inflight_sizes_1 <= mux(reset, UInt<64>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<3>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    watchdog_1 <= mux(reset, UInt<32>("h0"), _GEN_70) @[Monitor.scala 813:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_65), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_68), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_72), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_81), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_82) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_65), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_68), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_72), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_135), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_138), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_81), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_148) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_172), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_176), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_68), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_186), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_190), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_81), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_172), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_154 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_176), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_68), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_186), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_154, _T_190), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_165 = and(io_in_a_valid, _T_236) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_172), and(_GEN_165, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_167 = and(_GEN_165, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_176), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_165, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_165, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_68), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_165, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_186), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_275), and(_GEN_165, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_167, _T_278), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_178 = and(io_in_a_valid, _T_279) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_178, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_178, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_178, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_178, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_183 = and(_GEN_178, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_68), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_309), and(_GEN_178, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_312), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_178, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_190), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_190 = and(io_in_a_valid, _T_317) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_190, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_190, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_190, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_190, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_195 = and(_GEN_190, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_68), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_347), and(_GEN_190, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_350), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_190, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_195, _T_190), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_202 = and(io_in_a_valid, _T_355) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_202, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_202, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_202, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_202, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_207 = and(_GEN_202, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_68), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_385), and(_GEN_202, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_388), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_202, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_190), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_202, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_207, _T_81), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_397), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_217 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_217, _T_400), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_218 = and(io_in_d_valid, _T_401) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_218, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_218, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    node _GEN_221 = and(_GEN_218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_408), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_218, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_412), "Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_55 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_218, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_416), "Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_56 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_218, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_221, _T_420), "Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_57 @[Monitor.scala 49:11]
    node _GEN_231 = and(io_in_d_valid, _T_421) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_231, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_231, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_231, _T_2), "Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_231, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    node _GEN_236 = and(_GEN_231, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_408), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_432), and(_GEN_231, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_435), "Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_61 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_436), and(_GEN_231, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_439), "Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_62 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_231, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_416), "Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_63 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_231, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_236, _T_420), "Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_64 @[Monitor.scala 49:11]
    node _GEN_249 = and(io_in_d_valid, _T_449) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_249, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_249, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_249, _T_2), "Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_405), and(_GEN_249, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    node _GEN_254 = and(_GEN_249, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_408), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_432), and(_GEN_249, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_435), "Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_68 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_436), and(_GEN_249, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_439), "Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_69 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_249, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_472), "Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_70 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_249, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_254, _T_420), "Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_71 @[Monitor.scala 49:11]
    node _GEN_267 = and(io_in_d_valid, _T_478) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_267, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_267, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    node _GEN_270 = and(_GEN_267, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_412), "Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_73 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_267, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_416), "Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_74 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_267, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_270, _T_420), "Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_75 @[Monitor.scala 49:11]
    node _GEN_277 = and(io_in_d_valid, _T_495) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_277, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_277, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    node _GEN_280 = and(_GEN_277, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_412), "Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_77 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_469), and(_GEN_277, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_472), "Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_78 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_277, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_280, _T_420), "Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_79 @[Monitor.scala 49:11]
    node _GEN_287 = and(io_in_d_valid, _T_513) @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_287, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_409), and(_GEN_287, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    node _GEN_290 = and(_GEN_287, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_412), "Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_81 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_413), and(_GEN_287, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_416), "Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_82 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_417), and(_GEN_287, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_290, _T_420), "Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_544), and(_T_543, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_297 = and(_T_543, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_547), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_548), and(_T_543, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_551), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_552), and(_T_543, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_555), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_556), and(_T_543, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_559), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_560), and(_T_543, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_297, _T_563), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_568), and(_T_567, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_302 = and(_T_567, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_571), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_572), and(_T_567, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_575), "Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_576), and(_T_567, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_579), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_580), and(_T_567, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_583), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_584), and(_T_567, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_587), "Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_96 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_588), and(_T_567, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_302, _T_591), "Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_601), and(_T_597, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_308 = and(_T_597, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_308, _T_604), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_620), and(_T_608, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_309 = and(_T_608, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_309, _T_623), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_310 = and(_T_608, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_626), and(_GEN_310, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_312 = and(_GEN_310, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_629), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_630), and(_GEN_310, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_312, _T_633), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_316 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_317 = and(_T_608, _GEN_316) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_638), and(_GEN_317, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_320 = and(_GEN_317, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_641), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_642), and(_GEN_317, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_320, _T_645), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_654), and(_T_652, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_326 = and(_T_652, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_326, _T_657), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_661), _T_2), 1) : assert_105 @[Monitor.scala 49:11]
    printf(clock, and(_T_2, _T_664), "Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_105 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_670), _T_2), 1) : assert_106 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_673), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_106 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_705), and(_T_696, _T_2)), 1) : assert_108 @[Monitor.scala 49:11]
    node _GEN_327 = and(_T_696, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_709), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_108 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_714), and(_T_696, _T_2)), 1) : assert_110 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_327, _T_717), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_110 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_739), _T_2), 1) : assert_113 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_742), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:102)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_113 @[Monitor.scala 42:11]

  module Repeater_11_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_repeat : UInt<1>
    output io_full : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_param : UInt<3>
    input io_enq_bits_size : UInt<3>
    input io_enq_bits_source : UInt<4>
    input io_enq_bits_address : UInt<29>
    input io_enq_bits_mask : UInt<8>
    input io_enq_bits_corrupt : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<3>
    output io_deq_bits_size : UInt<3>
    output io_deq_bits_source : UInt<4>
    output io_deq_bits_address : UInt<29>
    output io_deq_bits_mask : UInt<8>
    output io_deq_bits_corrupt : UInt<1>

    reg full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), full) @[Repeater.scala 19:21]
    reg saved_opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_opcode) @[Repeater.scala 20:18]
    reg saved_param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_param) @[Repeater.scala 20:18]
    reg saved_size : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_size) @[Repeater.scala 20:18]
    reg saved_source : UInt<4>, clock with :
      reset => (UInt<1>("h0"), saved_source) @[Repeater.scala 20:18]
    reg saved_address : UInt<29>, clock with :
      reset => (UInt<1>("h0"), saved_address) @[Repeater.scala 20:18]
    reg saved_mask : UInt<8>, clock with :
      reset => (UInt<1>("h0"), saved_mask) @[Repeater.scala 20:18]
    reg saved_corrupt : UInt<1>, clock with :
      reset => (UInt<1>("h0"), saved_corrupt) @[Repeater.scala 20:18]
    node _io_enq_ready_T = not(full) @[Repeater.scala 24:35]
    node _T = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node _T_1 = and(_T, io_repeat) @[Repeater.scala 28:23]
    node _GEN_0 = or(_T_1, full) @[Repeater.scala 19:21 28:{38,45}]
    node _T_2 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _T_3 = not(io_repeat) @[Repeater.scala 29:26]
    node _T_4 = and(_T_2, _T_3) @[Repeater.scala 29:23]
    node _GEN_9 = mux(_T_4, UInt<1>("h0"), _GEN_0) @[Repeater.scala 29:{38,45}]
    io_full <= full @[Repeater.scala 26:11]
    io_enq_ready <= and(io_deq_ready, _io_enq_ready_T) @[Repeater.scala 24:32]
    io_deq_valid <= or(io_enq_valid, full) @[Repeater.scala 23:32]
    io_deq_bits_opcode <= mux(full, saved_opcode, io_enq_bits_opcode) @[Repeater.scala 25:21]
    io_deq_bits_param <= mux(full, saved_param, io_enq_bits_param) @[Repeater.scala 25:21]
    io_deq_bits_size <= mux(full, saved_size, io_enq_bits_size) @[Repeater.scala 25:21]
    io_deq_bits_source <= mux(full, saved_source, io_enq_bits_source) @[Repeater.scala 25:21]
    io_deq_bits_address <= mux(full, saved_address, io_enq_bits_address) @[Repeater.scala 25:21]
    io_deq_bits_mask <= mux(full, saved_mask, io_enq_bits_mask) @[Repeater.scala 25:21]
    io_deq_bits_corrupt <= mux(full, saved_corrupt, io_enq_bits_corrupt) @[Repeater.scala 25:21]
    full <= mux(reset, UInt<1>("h0"), _GEN_9) @[Repeater.scala 19:{21,21}]
    saved_opcode <= mux(_T_1, io_enq_bits_opcode, saved_opcode) @[Repeater.scala 20:18 28:{38,62}]
    saved_param <= mux(_T_1, io_enq_bits_param, saved_param) @[Repeater.scala 20:18 28:{38,62}]
    saved_size <= mux(_T_1, io_enq_bits_size, saved_size) @[Repeater.scala 20:18 28:{38,62}]
    saved_source <= mux(_T_1, io_enq_bits_source, saved_source) @[Repeater.scala 20:18 28:{38,62}]
    saved_address <= mux(_T_1, io_enq_bits_address, saved_address) @[Repeater.scala 20:18 28:{38,62}]
    saved_mask <= mux(_T_1, io_enq_bits_mask, saved_mask) @[Repeater.scala 20:18 28:{38,62}]
    saved_corrupt <= mux(_T_1, io_enq_bits_corrupt, saved_corrupt) @[Repeater.scala 20:18 28:{38,62}]

  module TLFragmenter_9_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<3>
    input auto_in_a_bits_source : UInt<4>
    input auto_in_a_bits_address : UInt<29>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_data : UInt<64>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_opcode : UInt<3>
    output auto_in_d_bits_param : UInt<2>
    output auto_in_d_bits_size : UInt<3>
    output auto_in_d_bits_source : UInt<4>
    output auto_in_d_bits_sink : UInt<1>
    output auto_in_d_bits_denied : UInt<1>
    output auto_in_d_bits_data : UInt<64>
    output auto_in_d_bits_corrupt : UInt<1>
    input auto_out_a_ready : UInt<1>
    output auto_out_a_valid : UInt<1>
    output auto_out_a_bits_opcode : UInt<3>
    output auto_out_a_bits_param : UInt<3>
    output auto_out_a_bits_size : UInt<2>
    output auto_out_a_bits_source : UInt<8>
    output auto_out_a_bits_address : UInt<29>
    output auto_out_a_bits_mask : UInt<8>
    output auto_out_a_bits_data : UInt<64>
    output auto_out_a_bits_corrupt : UInt<1>
    output auto_out_d_ready : UInt<1>
    input auto_out_d_valid : UInt<1>
    input auto_out_d_bits_opcode : UInt<3>
    input auto_out_d_bits_param : UInt<2>
    input auto_out_d_bits_size : UInt<2>
    input auto_out_d_bits_source : UInt<8>
    input auto_out_d_bits_sink : UInt<1>
    input auto_out_d_bits_denied : UInt<1>
    input auto_out_d_bits_data : UInt<64>
    input auto_out_d_bits_corrupt : UInt<1>

    inst monitor of TLMonitor_68_inTestHarness @[Nodes.scala 24:25]
    inst repeater of Repeater_11_inTestHarness @[Fragmenter.scala 262:30]
    reg acknum : UInt<3>, clock with :
      reset => (UInt<1>("h0"), acknum) @[Fragmenter.scala 189:29]
    reg dOrig : UInt<3>, clock with :
      reset => (UInt<1>("h0"), dOrig) @[Fragmenter.scala 190:24]
    reg dToggle : UInt<1>, clock with :
      reset => (UInt<1>("h0"), dToggle) @[Fragmenter.scala 191:30]
    node dFragnum = bits(auto_out_d_bits_source, 2, 0) @[Fragmenter.scala 192:41]
    node dFirst = eq(acknum, UInt<3>("h0")) @[Fragmenter.scala 193:29]
    node dLast = eq(dFragnum, UInt<3>("h0")) @[Fragmenter.scala 194:30]
    node dsizeOH = dshl(UInt<1>("h1"), auto_out_d_bits_size) @[OneHot.scala 64:12]
    node _dsizeOH1_T_1 = dshl(UInt<3>("h7"), auto_out_d_bits_size) @[package.scala 234:77]
    node _dsizeOH1_T_2 = bits(_dsizeOH1_T_1, 2, 0) @[package.scala 234:82]
    node dsizeOH1 = not(_dsizeOH1_T_2) @[package.scala 234:46]
    node dHasData = bits(auto_out_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node _T_5 = not(reset) @[Fragmenter.scala 202:16]
    node _ack_decrement_T = shr(dsizeOH, 3) @[Fragmenter.scala 204:60]
    node ack_decrement = or(dHasData, _ack_decrement_T) @[Fragmenter.scala 204:32]
    node _dFirst_size_T = shl(dFragnum, 3) @[Fragmenter.scala 206:47]
    node _GEN_7 = pad(dsizeOH1, 6) @[Fragmenter.scala 206:69]
    node _dFirst_size_T_1 = or(_dFirst_size_T, _GEN_7) @[Fragmenter.scala 206:69]
    node _dFirst_size_T_2 = shl(_dFirst_size_T_1, 1) @[package.scala 232:35]
    node _dFirst_size_T_3 = or(_dFirst_size_T_2, UInt<7>("h1")) @[package.scala 232:40]
    node _dFirst_size_T_4 = cat(UInt<1>("h0"), _dFirst_size_T_1) @[Cat.scala 31:58]
    node _dFirst_size_T_5 = not(_dFirst_size_T_4) @[package.scala 232:53]
    node _dFirst_size_T_6 = and(_dFirst_size_T_3, _dFirst_size_T_5) @[package.scala 232:51]
    node dFirst_size_hi = bits(_dFirst_size_T_6, 6, 4) @[OneHot.scala 30:18]
    node dFirst_size_lo = bits(_dFirst_size_T_6, 3, 0) @[OneHot.scala 31:18]
    node _dFirst_size_T_7 = orr(dFirst_size_hi) @[OneHot.scala 32:14]
    node _GEN_8 = pad(dFirst_size_hi, 4) @[OneHot.scala 32:28]
    node _dFirst_size_T_8 = or(_GEN_8, dFirst_size_lo) @[OneHot.scala 32:28]
    node dFirst_size_hi_1 = bits(_dFirst_size_T_8, 3, 2) @[OneHot.scala 30:18]
    node dFirst_size_lo_1 = bits(_dFirst_size_T_8, 1, 0) @[OneHot.scala 31:18]
    node _dFirst_size_T_9 = orr(dFirst_size_hi_1) @[OneHot.scala 32:14]
    node _dFirst_size_T_10 = or(dFirst_size_hi_1, dFirst_size_lo_1) @[OneHot.scala 32:28]
    node _dFirst_size_T_11 = bits(_dFirst_size_T_10, 1, 1) @[CircuitMath.scala 30:8]
    node _dFirst_size_T_12 = cat(_dFirst_size_T_9, _dFirst_size_T_11) @[Cat.scala 31:58]
    node dFirst_size = cat(_dFirst_size_T_7, _dFirst_size_T_12) @[Cat.scala 31:58]
    node _drop_T = not(dHasData) @[Fragmenter.scala 222:20]
    node _drop_T_2 = not(dLast) @[Fragmenter.scala 222:33]
    node drop = and(_drop_T, _drop_T_2) @[Fragmenter.scala 222:30]
    node bundleOut_0_d_ready = or(auto_in_d_ready, drop) @[Fragmenter.scala 223:35]
    node _T_7 = and(bundleOut_0_d_ready, auto_out_d_valid) @[Decoupled.scala 50:35]
    node _GEN_9 = pad(ack_decrement, 3) @[Fragmenter.scala 209:55]
    node _acknum_T = sub(acknum, _GEN_9) @[Fragmenter.scala 209:55]
    node _acknum_T_1 = tail(_acknum_T, 1) @[Fragmenter.scala 209:55]
    node _acknum_T_2 = mux(dFirst, dFragnum, _acknum_T_1) @[Fragmenter.scala 209:24]
    node _dToggle_T = bits(auto_out_d_bits_source, 3, 3) @[Fragmenter.scala 212:41]
    node _GEN_0 = mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 210:25 211:19 190:24]
    node _GEN_1 = mux(dFirst, _dToggle_T, dToggle) @[Fragmenter.scala 210:25 212:21 191:30]
    node _GEN_2 = mux(_T_7, _acknum_T_2, acknum) @[Fragmenter.scala 208:29 209:18 189:29]
    node _GEN_4 = mux(_T_7, _GEN_1, dToggle) @[Fragmenter.scala 208:29 191:30]
    node _bundleIn_0_d_valid_T = not(drop) @[Fragmenter.scala 224:39]
    node _aFrag_T = gt(repeater.io_deq_bits_size, UInt<3>("h3")) @[Fragmenter.scala 285:31]
    node aFrag = mux(_aFrag_T, UInt<3>("h3"), repeater.io_deq_bits_size) @[Fragmenter.scala 285:24]
    node _aOrigOH1_T_1 = dshl(UInt<6>("h3f"), repeater.io_deq_bits_size) @[package.scala 234:77]
    node _aOrigOH1_T_2 = bits(_aOrigOH1_T_1, 5, 0) @[package.scala 234:82]
    node aOrigOH1 = not(_aOrigOH1_T_2) @[package.scala 234:46]
    node _aFragOH1_T_1 = dshl(UInt<3>("h7"), aFrag) @[package.scala 234:77]
    node _aFragOH1_T_2 = bits(_aFragOH1_T_1, 2, 0) @[package.scala 234:82]
    node aFragOH1 = not(_aFragOH1_T_2) @[package.scala 234:46]
    node _aHasData_opdata_T = bits(repeater.io_deq_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node aHasData = not(_aHasData_opdata_T) @[Edges.scala 91:28]
    reg gennum : UInt<3>, clock with :
      reset => (UInt<1>("h0"), gennum) @[Fragmenter.scala 291:29]
    node aFirst = eq(gennum, UInt<3>("h0")) @[Fragmenter.scala 292:29]
    node _old_gennum1_T = shr(aOrigOH1, 3) @[Fragmenter.scala 293:48]
    node _old_gennum1_T_1 = sub(gennum, UInt<3>("h1")) @[Fragmenter.scala 293:79]
    node _old_gennum1_T_2 = tail(_old_gennum1_T_1, 1) @[Fragmenter.scala 293:79]
    node old_gennum1 = mux(aFirst, _old_gennum1_T, _old_gennum1_T_2) @[Fragmenter.scala 293:30]
    node _new_gennum_T = not(old_gennum1) @[Fragmenter.scala 294:28]
    node new_gennum = not(_new_gennum_T) @[Fragmenter.scala 294:26]
    reg aToggle_r : UInt<1>, clock with :
      reset => (UInt<1>("h0"), aToggle_r) @[Reg.scala 16:16]
    node _GEN_5 = mux(aFirst, dToggle, aToggle_r) @[Reg.scala 16:16 17:{18,22}]
    node aToggle = not(_GEN_5) @[Fragmenter.scala 297:23]
    node bundleOut_0_a_valid = repeater.io_deq_valid @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    node _T_8 = and(auto_out_a_ready, bundleOut_0_a_valid) @[Decoupled.scala 50:35]
    node _GEN_6 = mux(_T_8, new_gennum, gennum) @[Fragmenter.scala 291:29 300:{29,38}]
    node _repeater_io_repeat_T = not(aHasData) @[Fragmenter.scala 302:31]
    node _repeater_io_repeat_T_1 = neq(new_gennum, UInt<3>("h0")) @[Fragmenter.scala 302:53]
    node _bundleOut_0_a_bits_address_T = shl(old_gennum1, 3) @[Fragmenter.scala 304:65]
    node _bundleOut_0_a_bits_address_T_1 = not(aOrigOH1) @[Fragmenter.scala 304:90]
    node _bundleOut_0_a_bits_address_T_2 = or(_bundleOut_0_a_bits_address_T, _bundleOut_0_a_bits_address_T_1) @[Fragmenter.scala 304:88]
    node _GEN_10 = pad(aFragOH1, 6) @[Fragmenter.scala 304:100]
    node _bundleOut_0_a_bits_address_T_3 = or(_bundleOut_0_a_bits_address_T_2, _GEN_10) @[Fragmenter.scala 304:100]
    node _bundleOut_0_a_bits_address_T_4 = or(_bundleOut_0_a_bits_address_T_3, UInt<6>("h7")) @[Fragmenter.scala 304:111]
    node _bundleOut_0_a_bits_address_T_5 = not(_bundleOut_0_a_bits_address_T_4) @[Fragmenter.scala 304:51]
    node _GEN_11 = pad(_bundleOut_0_a_bits_address_T_5, 29) @[Fragmenter.scala 304:49]
    node bundleOut_0_a_bits_source_hi = cat(repeater.io_deq_bits_source, aToggle) @[Cat.scala 31:58]
    node _T_9 = not(repeater.io_full) @[Fragmenter.scala 309:17]
    node _T_11 = or(_T_9, _repeater_io_repeat_T) @[Fragmenter.scala 309:35]
    node _T_14 = not(_T_11) @[Fragmenter.scala 309:16]
    node _T_16 = eq(repeater.io_deq_bits_mask, UInt<8>("hff")) @[Fragmenter.scala 312:53]
    node _T_17 = or(_T_9, _T_16) @[Fragmenter.scala 312:35]
    node _T_20 = not(_T_17) @[Fragmenter.scala 312:16]
    auto_in_a_ready <= repeater.io_enq_ready @[Nodes.scala 1210:84 Fragmenter.scala 263:25]
    auto_in_d_valid <= and(auto_out_d_valid, _bundleIn_0_d_valid_T) @[Fragmenter.scala 224:36]
    auto_in_d_bits_opcode <= auto_out_d_bits_opcode @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_in_d_bits_param <= auto_out_d_bits_param @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_in_d_bits_size <= mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 227:32]
    auto_in_d_bits_source <= shr(auto_out_d_bits_source, 4) @[Fragmenter.scala 226:47]
    auto_in_d_bits_sink <= auto_out_d_bits_sink @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_in_d_bits_denied <= auto_out_d_bits_denied @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_in_d_bits_data <= auto_out_d_bits_data @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_in_d_bits_corrupt <= auto_out_d_bits_corrupt @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_out_a_valid <= repeater.io_deq_valid @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_opcode <= repeater.io_deq_bits_opcode @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_param <= repeater.io_deq_bits_param @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_size <= bits(aFrag, 1, 0) @[Nodes.scala 1207:84 Fragmenter.scala 306:25]
    auto_out_a_bits_source <= cat(bundleOut_0_a_bits_source_hi, new_gennum) @[Cat.scala 31:58]
    auto_out_a_bits_address <= or(repeater.io_deq_bits_address, _GEN_11) @[Fragmenter.scala 304:49]
    auto_out_a_bits_mask <= mux(repeater.io_full, UInt<8>("hff"), auto_in_a_bits_mask) @[Fragmenter.scala 313:31]
    auto_out_a_bits_data <= auto_in_a_bits_data @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    auto_out_a_bits_corrupt <= repeater.io_deq_bits_corrupt @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_d_ready <= or(auto_in_d_ready, drop) @[Fragmenter.scala 223:35]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= repeater.io_enq_ready @[Nodes.scala 1210:84 Fragmenter.scala 263:25]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= and(auto_out_d_valid, _bundleIn_0_d_valid_T) @[Fragmenter.scala 224:36]
    monitor.io_in_d_bits_opcode <= auto_out_d_bits_opcode @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    monitor.io_in_d_bits_param <= auto_out_d_bits_param @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    monitor.io_in_d_bits_size <= mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 227:32]
    monitor.io_in_d_bits_source <= shr(auto_out_d_bits_source, 4) @[Fragmenter.scala 226:47]
    monitor.io_in_d_bits_sink <= auto_out_d_bits_sink @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    monitor.io_in_d_bits_denied <= auto_out_d_bits_denied @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    monitor.io_in_d_bits_corrupt <= auto_out_d_bits_corrupt @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    acknum <= mux(reset, UInt<3>("h0"), _GEN_2) @[Fragmenter.scala 189:{29,29}]
    dOrig <= mux(_T_7, _GEN_0, dOrig) @[Fragmenter.scala 190:24 208:29]
    dToggle <= mux(reset, UInt<1>("h0"), _GEN_4) @[Fragmenter.scala 191:{30,30}]
    repeater.clock <= clock
    repeater.reset <= reset
    repeater.io_repeat <= and(_repeater_io_repeat_T, _repeater_io_repeat_T_1) @[Fragmenter.scala 302:41]
    repeater.io_enq_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_deq_ready <= auto_out_a_ready @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    gennum <= mux(reset, UInt<3>("h0"), _GEN_6) @[Fragmenter.scala 291:{29,29}]
    aToggle_r <= mux(aFirst, dToggle, aToggle_r) @[Reg.scala 16:16 17:{18,22}]
    stop(clock, and(not(UInt<1>("h1")), _T_5), 1) : assert @[Fragmenter.scala 202:16]
    stop(clock, and(not(_T_11), _T_5), 1) : assert_1 @[Fragmenter.scala 309:16]
    printf(clock, and(_T_5, _T_14), "Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n") : printf_1 @[Fragmenter.scala 309:16]
    stop(clock, and(not(_T_17), _T_5), 1) : assert_2 @[Fragmenter.scala 312:16]
    printf(clock, and(_T_5, _T_20), "Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n") : printf_2 @[Fragmenter.scala 312:16]

  module TLMonitor_69_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_param : UInt<3>
    input io_in_a_bits_size : UInt<3>
    input io_in_a_bits_source : UInt<4>
    input io_in_a_bits_address : UInt<18>
    input io_in_a_bits_mask : UInt<8>
    input io_in_a_bits_corrupt : UInt<1>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_size : UInt<3>
    input io_in_d_bits_source : UInt<4>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<6>("h3f"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 5, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 18) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<18>("h0")) @[Edges.scala 20:24]
    node mask_sizeOH_shiftAmount = bits(io_in_a_bits_size, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<3>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_20 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_33 = xor(io_in_a_bits_address, UInt<18>("h20000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<19>("h-10000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<19>("h0")) @[Parameters.scala 137:67]
    node _T_65 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_68 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_69 = leq(io_in_a_bits_param, UInt<3>("h2")) @[Bundles.scala 108:27]
    node _T_72 = not(_T_69) @[Monitor.scala 42:11]
    node _T_73 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_74 = eq(_T_73, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_77 = not(_T_74) @[Monitor.scala 42:11]
    node _T_78 = not(io_in_a_bits_corrupt) @[Monitor.scala 89:18]
    node _T_81 = not(_T_78) @[Monitor.scala 42:11]
    node _T_82 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_135 = neq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 99:31]
    node _T_138 = not(_T_135) @[Monitor.scala 42:11]
    node _T_148 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_164 = leq(io_in_a_bits_size, UInt<3>("h6")) @[Parameters.scala 92:42]
    node _T_172 = and(_T_164, _T_37) @[Parameters.scala 670:56]
    node _T_176 = not(_T_172) @[Monitor.scala 42:11]
    node _T_183 = eq(io_in_a_bits_param, UInt<3>("h0")) @[Monitor.scala 109:31]
    node _T_186 = not(_T_183) @[Monitor.scala 42:11]
    node _T_187 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_233 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_267 = not(mask) @[Monitor.scala 127:33]
    node _T_268 = and(io_in_a_bits_mask, _T_267) @[Monitor.scala 127:31]
    node _T_269 = eq(_T_268, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_272 = not(_T_269) @[Monitor.scala 42:11]
    node _T_273 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_303 = leq(io_in_a_bits_param, UInt<3>("h4")) @[Bundles.scala 138:33]
    node _T_306 = not(_T_303) @[Monitor.scala 42:11]
    node _T_311 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_341 = leq(io_in_a_bits_param, UInt<3>("h3")) @[Bundles.scala 145:30]
    node _T_344 = not(_T_341) @[Monitor.scala 42:11]
    node _T_349 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_379 = leq(io_in_a_bits_param, UInt<3>("h1")) @[Bundles.scala 158:28]
    node _T_382 = not(_T_379) @[Monitor.scala 42:11]
    node _T_399 = geq(io_in_d_bits_size, UInt<3>("h3")) @[Monitor.scala 312:27]
    node a_first_done = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    reg a_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = eq(a_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, UInt<3>("h0"), a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(a_first_done, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), param) @[Monitor.scala 385:22]
    reg size : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg source : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source) @[Monitor.scala 387:22]
    reg address : UInt<18>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_536 = not(a_first) @[Monitor.scala 389:22]
    node _T_537 = and(io_in_a_valid, _T_536) @[Monitor.scala 389:19]
    node _T_538 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_541 = not(_T_538) @[Monitor.scala 42:11]
    node _T_542 = eq(io_in_a_bits_param, param) @[Monitor.scala 391:32]
    node _T_545 = not(_T_542) @[Monitor.scala 42:11]
    node _T_546 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_549 = not(_T_546) @[Monitor.scala 42:11]
    node _T_550 = eq(io_in_a_bits_source, source) @[Monitor.scala 393:32]
    node _T_553 = not(_T_550) @[Monitor.scala 42:11]
    node _T_554 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_557 = not(_T_554) @[Monitor.scala 42:11]
    node _T_559 = and(a_first_done, a_first) @[Monitor.scala 396:20]
    node _d_first_T = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    node _d_first_beats1_decode_T_1 = dshl(UInt<6>("h3f"), io_in_d_bits_size) @[package.scala 234:77]
    node _d_first_beats1_decode_T_2 = bits(_d_first_beats1_decode_T_1, 5, 0) @[package.scala 234:82]
    node _d_first_beats1_decode_T_3 = not(_d_first_beats1_decode_T_2) @[package.scala 234:46]
    node d_first_beats1_decode = shr(_d_first_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    reg d_first_counter : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = eq(d_first_counter, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, d_first_beats1_decode, d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(_d_first_T, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg size_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    node _T_560 = not(d_first) @[Monitor.scala 541:22]
    node _T_561 = and(io_in_d_valid, _T_560) @[Monitor.scala 541:19]
    node _T_570 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_573 = not(_T_570) @[Monitor.scala 49:11]
    node _T_574 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_577 = not(_T_574) @[Monitor.scala 49:11]
    node _T_587 = and(_d_first_T, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<16>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<64>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = eq(a_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, UInt<3>("h0"), a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(a_first_done, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<3>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = eq(d_first_counter_1, UInt<3>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, d_first_beats1_decode, d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(_d_first_T, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 7) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_5, 64) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_a_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 64) @[Monitor.scala 634:152]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_opcode_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_6 = and(_a_size_lookup_T_1, _GEN_73) @[Monitor.scala 638:91]
    node _GEN_77 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_77, 64) @[Monitor.scala 638:144]
    node _T_588 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _a_set_wo_ready_T = dshl(UInt<1>("h1"), io_in_a_bits_source) @[OneHot.scala 57:35]
    node _T_591 = and(a_first_done, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 655:59]
    node _GEN_78 = shl(io_in_a_bits_source, 2) @[Monitor.scala 656:79]
    node _a_opcodes_set_T = pad(_GEN_78, 7) @[Monitor.scala 656:79]
    node a_opcodes_set_interm = mux(_T_591, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = dshl(a_opcodes_set_interm, _a_opcodes_set_T) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_591, _a_sizes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = dshl(a_sizes_set_interm, _a_opcodes_set_T) @[Monitor.scala 657:52]
    node _T_593 = dshr(inflight, io_in_a_bits_source) @[Monitor.scala 658:26]
    node _T_594 = bits(_T_593, 0, 0) @[Monitor.scala 658:26]
    node _T_595 = not(_T_594) @[Monitor.scala 658:17]
    node _T_598 = not(_T_595) @[Monitor.scala 42:11]
    node a_set = mux(_T_591, _a_set_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_591, _a_opcodes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_591, _a_sizes_set_T_1, UInt<131>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_599 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node _T_604 = and(_d_first_T, d_first_1) @[Monitor.scala 675:27]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node d_clr = mux(_T_604, _d_clr_wo_ready_T, UInt<16>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_604, _d_opcodes_clr_T_5, UInt<143>("h0")) @[Monitor.scala 675:91 677:21]
    node _same_cycle_resp_T_2 = eq(io_in_a_bits_source, io_in_d_bits_source) @[Monitor.scala 681:113]
    node same_cycle_resp = and(_T_588, _same_cycle_resp_T_2) @[Monitor.scala 681:88]
    node _T_612 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_613 = bits(_T_612, 0, 0) @[Monitor.scala 682:25]
    node _T_614 = or(_T_613, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_617 = not(_T_614) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_618 = eq(UInt<3>("h1"), _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_619 = eq(UInt<3>("h1"), _GEN_40) @[Monitor.scala 686:39]
    node _T_620 = or(_T_618, _T_619) @[Monitor.scala 685:77]
    node _T_623 = not(_T_620) @[Monitor.scala 49:11]
    node _T_624 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_627 = not(_T_624) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_628 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_628), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_628), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_628), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_628), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_628), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_628), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_629 = eq(UInt<3>("h1"), _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_628), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_628), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_631 = eq(UInt<3>("h1"), _GEN_56) @[Monitor.scala 690:38]
    node _T_632 = or(_T_629, _T_631) @[Monitor.scala 689:72]
    node _T_635 = not(_T_632) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 3, 0)
    node _GEN_82 = pad(io_in_d_bits_size, 4) @[Monitor.scala 691:36]
    node _T_636 = eq(_GEN_82, a_size_lookup) @[Monitor.scala 691:36]
    node _T_639 = not(_T_636) @[Monitor.scala 49:11]
    node _T_641 = and(_T_599, a_first_1) @[Monitor.scala 694:36]
    node _T_642 = and(_T_641, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_644 = and(_T_642, _same_cycle_resp_T_2) @[Monitor.scala 694:65]
    node _T_647 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_648 = or(_T_647, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_651 = not(_T_648) @[Monitor.scala 49:11]
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 63, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 63, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 63, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_opcodes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_652 = orr(inflight) @[Monitor.scala 709:26]
    node _T_653 = not(_T_652) @[Monitor.scala 709:16]
    node _T_654 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_655 = or(_T_653, _T_654) @[Monitor.scala 709:30]
    node _T_656 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_657 = or(_T_655, _T_656) @[Monitor.scala 709:47]
    node _T_660 = not(_T_657) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_663 = or(a_first_done, _d_first_T) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_663, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    node _c_opcode_lookup_T_1 = dshr(UInt<64>("h0"), _a_opcode_lookup_T) @[Monitor.scala 746:44]
    node _c_opcode_lookup_T_6 = and(_c_opcode_lookup_T_1, _GEN_73) @[Monitor.scala 746:97]
    node _GEN_85 = shr(_c_opcode_lookup_T_6, 1) @[Monitor.scala 746:152]
    node _c_opcode_lookup_T_7 = pad(_GEN_85, 64) @[Monitor.scala 746:152]
    node _T_691 = dshr(UInt<16>("h0"), io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_692 = bits(_T_691, 0, 0) @[Monitor.scala 791:25]
    node _T_697 = eq(io_in_d_bits_size, UInt<3>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_opcode_lookup_T_7, 3, 0)
    node _T_701 = eq(_GEN_82, c_size_lookup) @[Monitor.scala 795:36]
    a_first_counter <= mux(reset, UInt<3>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_559, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    param <= mux(_T_559, io_in_a_bits_param, param) @[Monitor.scala 396:32 398:15 385:22]
    size <= mux(_T_559, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    source <= mux(_T_559, io_in_a_bits_source, source) @[Monitor.scala 396:32 400:15 387:22]
    address <= mux(_T_559, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<3>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    size_1 <= mux(_T_587, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_587, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    inflight <= mux(reset, UInt<16>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<64>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<64>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<3>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_92 = and(io_in_a_valid, _T_20) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_92, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_92, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_92, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_92, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    node _GEN_99 = and(_GEN_92, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_65), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_92, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_68), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_92, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_72), "Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_92, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_77), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_92, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_99, _T_81), "Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_9 @[Monitor.scala 42:11]
    node _GEN_112 = and(io_in_a_valid, _T_82) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_112, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_112, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_112, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_112, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    node _GEN_119 = and(_GEN_112, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_65), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_112, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_68), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_69), and(_GEN_112, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_72), "Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_15 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_135), and(_GEN_112, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_138), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_74), and(_GEN_112, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_77), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_112, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_119, _T_81), "Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_18 @[Monitor.scala 42:11]
    node _GEN_135 = and(io_in_a_valid, _T_148) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_172), and(_GEN_135, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    node _GEN_138 = and(_GEN_135, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_176), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_135, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_135, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_68), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_135, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_186), "Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_135, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_190), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_135, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_138, _T_81), "Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_25 @[Monitor.scala 42:11]
    node _GEN_152 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_152, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_152, _T_2), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_152, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_152, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    node _GEN_157 = and(_GEN_152, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_68), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_152, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_186), "Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_152, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_157, _T_190), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_164 = and(io_in_a_valid, _T_233) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_164, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_164, _T_2), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_164, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_164, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    node _GEN_169 = and(_GEN_164, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_68), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_183), and(_GEN_164, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_186), "Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_269), and(_GEN_164, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_169, _T_272), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_176 = and(io_in_a_valid, _T_273) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_176, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_176, _T_2), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_176, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_176, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    node _GEN_181 = and(_GEN_176, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_68), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_303), and(_GEN_176, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_306), "Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_176, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_181, _T_190), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_188 = and(io_in_a_valid, _T_311) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_188, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_188, _T_2), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_188, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_188, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    node _GEN_193 = and(_GEN_188, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_68), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_341), and(_GEN_188, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_344), "Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_188, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_193, _T_190), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_200 = and(io_in_a_valid, _T_349) @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_200, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_200, _T_2), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_200, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_200, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    node _GEN_205 = and(_GEN_200, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_68), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_379), and(_GEN_200, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_382), "Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_200, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_190), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_78), and(_GEN_200, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_205, _T_81), "Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_51 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_d_valid, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_538), and(_T_537, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_215 = and(_T_537, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_541), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_542), and(_T_537, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_545), "Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_546), and(_T_537, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_549), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_550), and(_T_537, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_553), "Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_554), and(_T_537, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_215, _T_557), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_570), and(_T_561, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    node _GEN_220 = and(_T_561, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_220, _T_573), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_574), and(_T_561, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_220, _T_577), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_561, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_595), and(_T_591, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_222 = and(_T_591, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_222, _T_598), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_614), and(_T_599, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_223 = and(_T_599, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_223, _T_617), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_224 = and(_T_599, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_620), and(_GEN_224, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_226 = and(_GEN_224, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_226, _T_623), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_624), and(_GEN_224, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_226, _T_627), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_230 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_231 = and(_T_599, _GEN_230) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_632), and(_GEN_231, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_234 = and(_GEN_231, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_234, _T_635), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_636), and(_GEN_231, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_234, _T_639), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_648), and(_T_644, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_240 = and(_T_644, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_240, _T_651), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_657), _T_2), 1) : assert_105 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_660), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_105 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_111 @[Monitor.scala 42:11]

  module Repeater_12_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_repeat : UInt<1>
    output io_full : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits_opcode : UInt<3>
    input io_enq_bits_param : UInt<3>
    input io_enq_bits_size : UInt<3>
    input io_enq_bits_source : UInt<4>
    input io_enq_bits_address : UInt<18>
    input io_enq_bits_mask : UInt<8>
    input io_enq_bits_corrupt : UInt<1>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits_opcode : UInt<3>
    output io_deq_bits_param : UInt<3>
    output io_deq_bits_size : UInt<3>
    output io_deq_bits_source : UInt<4>
    output io_deq_bits_address : UInt<18>
    output io_deq_bits_mask : UInt<8>
    output io_deq_bits_corrupt : UInt<1>

    reg full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), full) @[Repeater.scala 19:21]
    reg saved_opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_opcode) @[Repeater.scala 20:18]
    reg saved_param : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_param) @[Repeater.scala 20:18]
    reg saved_size : UInt<3>, clock with :
      reset => (UInt<1>("h0"), saved_size) @[Repeater.scala 20:18]
    reg saved_source : UInt<4>, clock with :
      reset => (UInt<1>("h0"), saved_source) @[Repeater.scala 20:18]
    reg saved_address : UInt<18>, clock with :
      reset => (UInt<1>("h0"), saved_address) @[Repeater.scala 20:18]
    reg saved_mask : UInt<8>, clock with :
      reset => (UInt<1>("h0"), saved_mask) @[Repeater.scala 20:18]
    reg saved_corrupt : UInt<1>, clock with :
      reset => (UInt<1>("h0"), saved_corrupt) @[Repeater.scala 20:18]
    node _io_enq_ready_T = not(full) @[Repeater.scala 24:35]
    node _T = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node _T_1 = and(_T, io_repeat) @[Repeater.scala 28:23]
    node _GEN_0 = or(_T_1, full) @[Repeater.scala 19:21 28:{38,45}]
    node _T_2 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _T_3 = not(io_repeat) @[Repeater.scala 29:26]
    node _T_4 = and(_T_2, _T_3) @[Repeater.scala 29:23]
    node _GEN_9 = mux(_T_4, UInt<1>("h0"), _GEN_0) @[Repeater.scala 29:{38,45}]
    io_full <= full @[Repeater.scala 26:11]
    io_enq_ready <= and(io_deq_ready, _io_enq_ready_T) @[Repeater.scala 24:32]
    io_deq_valid <= or(io_enq_valid, full) @[Repeater.scala 23:32]
    io_deq_bits_opcode <= mux(full, saved_opcode, io_enq_bits_opcode) @[Repeater.scala 25:21]
    io_deq_bits_param <= mux(full, saved_param, io_enq_bits_param) @[Repeater.scala 25:21]
    io_deq_bits_size <= mux(full, saved_size, io_enq_bits_size) @[Repeater.scala 25:21]
    io_deq_bits_source <= mux(full, saved_source, io_enq_bits_source) @[Repeater.scala 25:21]
    io_deq_bits_address <= mux(full, saved_address, io_enq_bits_address) @[Repeater.scala 25:21]
    io_deq_bits_mask <= mux(full, saved_mask, io_enq_bits_mask) @[Repeater.scala 25:21]
    io_deq_bits_corrupt <= mux(full, saved_corrupt, io_enq_bits_corrupt) @[Repeater.scala 25:21]
    full <= mux(reset, UInt<1>("h0"), _GEN_9) @[Repeater.scala 19:{21,21}]
    saved_opcode <= mux(_T_1, io_enq_bits_opcode, saved_opcode) @[Repeater.scala 20:18 28:{38,62}]
    saved_param <= mux(_T_1, io_enq_bits_param, saved_param) @[Repeater.scala 20:18 28:{38,62}]
    saved_size <= mux(_T_1, io_enq_bits_size, saved_size) @[Repeater.scala 20:18 28:{38,62}]
    saved_source <= mux(_T_1, io_enq_bits_source, saved_source) @[Repeater.scala 20:18 28:{38,62}]
    saved_address <= mux(_T_1, io_enq_bits_address, saved_address) @[Repeater.scala 20:18 28:{38,62}]
    saved_mask <= mux(_T_1, io_enq_bits_mask, saved_mask) @[Repeater.scala 20:18 28:{38,62}]
    saved_corrupt <= mux(_T_1, io_enq_bits_corrupt, saved_corrupt) @[Repeater.scala 20:18 28:{38,62}]

  module TLFragmenter_10_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_param : UInt<3>
    input auto_in_a_bits_size : UInt<3>
    input auto_in_a_bits_source : UInt<4>
    input auto_in_a_bits_address : UInt<18>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_corrupt : UInt<1>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_size : UInt<3>
    output auto_in_d_bits_source : UInt<4>
    output auto_in_d_bits_data : UInt<64>
    input auto_out_a_ready : UInt<1>
    output auto_out_a_valid : UInt<1>
    output auto_out_a_bits_opcode : UInt<3>
    output auto_out_a_bits_param : UInt<3>
    output auto_out_a_bits_size : UInt<2>
    output auto_out_a_bits_source : UInt<8>
    output auto_out_a_bits_address : UInt<18>
    output auto_out_a_bits_mask : UInt<8>
    output auto_out_a_bits_corrupt : UInt<1>
    output auto_out_d_ready : UInt<1>
    input auto_out_d_valid : UInt<1>
    input auto_out_d_bits_size : UInt<2>
    input auto_out_d_bits_source : UInt<8>
    input auto_out_d_bits_data : UInt<64>

    inst monitor of TLMonitor_69_inTestHarness @[Nodes.scala 24:25]
    inst repeater of Repeater_12_inTestHarness @[Fragmenter.scala 262:30]
    reg acknum : UInt<3>, clock with :
      reset => (UInt<1>("h0"), acknum) @[Fragmenter.scala 189:29]
    reg dOrig : UInt<3>, clock with :
      reset => (UInt<1>("h0"), dOrig) @[Fragmenter.scala 190:24]
    reg dToggle : UInt<1>, clock with :
      reset => (UInt<1>("h0"), dToggle) @[Fragmenter.scala 191:30]
    node dFragnum = bits(auto_out_d_bits_source, 2, 0) @[Fragmenter.scala 192:41]
    node dFirst = eq(acknum, UInt<3>("h0")) @[Fragmenter.scala 193:29]
    node _dsizeOH1_T_1 = dshl(UInt<3>("h7"), auto_out_d_bits_size) @[package.scala 234:77]
    node _dsizeOH1_T_2 = bits(_dsizeOH1_T_1, 2, 0) @[package.scala 234:82]
    node dsizeOH1 = not(_dsizeOH1_T_2) @[package.scala 234:46]
    node _T_5 = not(reset) @[Fragmenter.scala 202:16]
    node _dFirst_size_T = shl(dFragnum, 3) @[Fragmenter.scala 206:47]
    node _GEN_7 = pad(dsizeOH1, 6) @[Fragmenter.scala 206:69]
    node _dFirst_size_T_1 = or(_dFirst_size_T, _GEN_7) @[Fragmenter.scala 206:69]
    node _dFirst_size_T_2 = shl(_dFirst_size_T_1, 1) @[package.scala 232:35]
    node _dFirst_size_T_3 = or(_dFirst_size_T_2, UInt<7>("h1")) @[package.scala 232:40]
    node _dFirst_size_T_4 = cat(UInt<1>("h0"), _dFirst_size_T_1) @[Cat.scala 31:58]
    node _dFirst_size_T_5 = not(_dFirst_size_T_4) @[package.scala 232:53]
    node _dFirst_size_T_6 = and(_dFirst_size_T_3, _dFirst_size_T_5) @[package.scala 232:51]
    node dFirst_size_hi = bits(_dFirst_size_T_6, 6, 4) @[OneHot.scala 30:18]
    node dFirst_size_lo = bits(_dFirst_size_T_6, 3, 0) @[OneHot.scala 31:18]
    node _dFirst_size_T_7 = orr(dFirst_size_hi) @[OneHot.scala 32:14]
    node _GEN_8 = pad(dFirst_size_hi, 4) @[OneHot.scala 32:28]
    node _dFirst_size_T_8 = or(_GEN_8, dFirst_size_lo) @[OneHot.scala 32:28]
    node dFirst_size_hi_1 = bits(_dFirst_size_T_8, 3, 2) @[OneHot.scala 30:18]
    node dFirst_size_lo_1 = bits(_dFirst_size_T_8, 1, 0) @[OneHot.scala 31:18]
    node _dFirst_size_T_9 = orr(dFirst_size_hi_1) @[OneHot.scala 32:14]
    node _dFirst_size_T_10 = or(dFirst_size_hi_1, dFirst_size_lo_1) @[OneHot.scala 32:28]
    node _dFirst_size_T_11 = bits(_dFirst_size_T_10, 1, 1) @[CircuitMath.scala 30:8]
    node _dFirst_size_T_12 = cat(_dFirst_size_T_9, _dFirst_size_T_11) @[Cat.scala 31:58]
    node dFirst_size = cat(_dFirst_size_T_7, _dFirst_size_T_12) @[Cat.scala 31:58]
    node _T_7 = and(auto_in_d_ready, auto_out_d_valid) @[Decoupled.scala 50:35]
    node _acknum_T = sub(acknum, UInt<3>("h1")) @[Fragmenter.scala 209:55]
    node _acknum_T_1 = tail(_acknum_T, 1) @[Fragmenter.scala 209:55]
    node _acknum_T_2 = mux(dFirst, dFragnum, _acknum_T_1) @[Fragmenter.scala 209:24]
    node _dToggle_T = bits(auto_out_d_bits_source, 3, 3) @[Fragmenter.scala 212:41]
    node _GEN_0 = mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 210:25 211:19 190:24]
    node _GEN_1 = mux(dFirst, _dToggle_T, dToggle) @[Fragmenter.scala 210:25 212:21 191:30]
    node _GEN_2 = mux(_T_7, _acknum_T_2, acknum) @[Fragmenter.scala 208:29 209:18 189:29]
    node _GEN_4 = mux(_T_7, _GEN_1, dToggle) @[Fragmenter.scala 208:29 191:30]
    node _aFrag_T = gt(repeater.io_deq_bits_size, UInt<3>("h3")) @[Fragmenter.scala 285:31]
    node aFrag = mux(_aFrag_T, UInt<3>("h3"), repeater.io_deq_bits_size) @[Fragmenter.scala 285:24]
    node _aOrigOH1_T_1 = dshl(UInt<6>("h3f"), repeater.io_deq_bits_size) @[package.scala 234:77]
    node _aOrigOH1_T_2 = bits(_aOrigOH1_T_1, 5, 0) @[package.scala 234:82]
    node aOrigOH1 = not(_aOrigOH1_T_2) @[package.scala 234:46]
    node _aFragOH1_T_1 = dshl(UInt<3>("h7"), aFrag) @[package.scala 234:77]
    node _aFragOH1_T_2 = bits(_aFragOH1_T_1, 2, 0) @[package.scala 234:82]
    node aFragOH1 = not(_aFragOH1_T_2) @[package.scala 234:46]
    reg gennum : UInt<3>, clock with :
      reset => (UInt<1>("h0"), gennum) @[Fragmenter.scala 291:29]
    node aFirst = eq(gennum, UInt<3>("h0")) @[Fragmenter.scala 292:29]
    node _old_gennum1_T = shr(aOrigOH1, 3) @[Fragmenter.scala 293:48]
    node _old_gennum1_T_1 = sub(gennum, UInt<3>("h1")) @[Fragmenter.scala 293:79]
    node _old_gennum1_T_2 = tail(_old_gennum1_T_1, 1) @[Fragmenter.scala 293:79]
    node old_gennum1 = mux(aFirst, _old_gennum1_T, _old_gennum1_T_2) @[Fragmenter.scala 293:30]
    node _new_gennum_T = not(old_gennum1) @[Fragmenter.scala 294:28]
    node new_gennum = not(_new_gennum_T) @[Fragmenter.scala 294:26]
    reg aToggle_r : UInt<1>, clock with :
      reset => (UInt<1>("h0"), aToggle_r) @[Reg.scala 16:16]
    node _GEN_5 = mux(aFirst, dToggle, aToggle_r) @[Reg.scala 16:16 17:{18,22}]
    node aToggle = not(_GEN_5) @[Fragmenter.scala 297:23]
    node bundleOut_0_a_valid = repeater.io_deq_valid @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    node _T_8 = and(auto_out_a_ready, bundleOut_0_a_valid) @[Decoupled.scala 50:35]
    node _GEN_6 = mux(_T_8, new_gennum, gennum) @[Fragmenter.scala 291:29 300:{29,38}]
    node _bundleOut_0_a_bits_address_T = shl(old_gennum1, 3) @[Fragmenter.scala 304:65]
    node _bundleOut_0_a_bits_address_T_1 = not(aOrigOH1) @[Fragmenter.scala 304:90]
    node _bundleOut_0_a_bits_address_T_2 = or(_bundleOut_0_a_bits_address_T, _bundleOut_0_a_bits_address_T_1) @[Fragmenter.scala 304:88]
    node _GEN_9 = pad(aFragOH1, 6) @[Fragmenter.scala 304:100]
    node _bundleOut_0_a_bits_address_T_3 = or(_bundleOut_0_a_bits_address_T_2, _GEN_9) @[Fragmenter.scala 304:100]
    node _bundleOut_0_a_bits_address_T_4 = or(_bundleOut_0_a_bits_address_T_3, UInt<6>("h7")) @[Fragmenter.scala 304:111]
    node _bundleOut_0_a_bits_address_T_5 = not(_bundleOut_0_a_bits_address_T_4) @[Fragmenter.scala 304:51]
    node _GEN_10 = pad(_bundleOut_0_a_bits_address_T_5, 18) @[Fragmenter.scala 304:49]
    node bundleOut_0_a_bits_source_hi = cat(repeater.io_deq_bits_source, aToggle) @[Cat.scala 31:58]
    node _T_9 = not(repeater.io_full) @[Fragmenter.scala 309:17]
    node _T_16 = eq(repeater.io_deq_bits_mask, UInt<8>("hff")) @[Fragmenter.scala 312:53]
    node _T_17 = or(_T_9, _T_16) @[Fragmenter.scala 312:35]
    node _T_20 = not(_T_17) @[Fragmenter.scala 312:16]
    auto_in_a_ready <= repeater.io_enq_ready @[Nodes.scala 1210:84 Fragmenter.scala 263:25]
    auto_in_d_valid <= auto_out_d_valid @[Fragmenter.scala 224:36]
    auto_in_d_bits_size <= mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 227:32]
    auto_in_d_bits_source <= shr(auto_out_d_bits_source, 4) @[Fragmenter.scala 226:47]
    auto_in_d_bits_data <= auto_out_d_bits_data @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    auto_out_a_valid <= repeater.io_deq_valid @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_opcode <= repeater.io_deq_bits_opcode @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_param <= repeater.io_deq_bits_param @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_a_bits_size <= bits(aFrag, 1, 0) @[Nodes.scala 1207:84 Fragmenter.scala 306:25]
    auto_out_a_bits_source <= cat(bundleOut_0_a_bits_source_hi, new_gennum) @[Cat.scala 31:58]
    auto_out_a_bits_address <= or(repeater.io_deq_bits_address, _GEN_10) @[Fragmenter.scala 304:49]
    auto_out_a_bits_mask <= mux(repeater.io_full, UInt<8>("hff"), auto_in_a_bits_mask) @[Fragmenter.scala 313:31]
    auto_out_a_bits_corrupt <= repeater.io_deq_bits_corrupt @[Nodes.scala 1207:84 Fragmenter.scala 303:15]
    auto_out_d_ready <= auto_in_d_ready @[Fragmenter.scala 223:35]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= repeater.io_enq_ready @[Nodes.scala 1210:84 Fragmenter.scala 263:25]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= auto_out_d_valid @[Fragmenter.scala 224:36]
    monitor.io_in_d_bits_size <= mux(dFirst, dFirst_size, dOrig) @[Fragmenter.scala 227:32]
    monitor.io_in_d_bits_source <= shr(auto_out_d_bits_source, 4) @[Fragmenter.scala 226:47]
    acknum <= mux(reset, UInt<3>("h0"), _GEN_2) @[Fragmenter.scala 189:{29,29}]
    dOrig <= mux(_T_7, _GEN_0, dOrig) @[Fragmenter.scala 190:24 208:29]
    dToggle <= mux(reset, UInt<1>("h0"), _GEN_4) @[Fragmenter.scala 191:{30,30}]
    repeater.clock <= clock
    repeater.reset <= reset
    repeater.io_repeat <= neq(new_gennum, UInt<3>("h0")) @[Fragmenter.scala 302:53]
    repeater.io_enq_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_param <= auto_in_a_bits_param @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_source <= auto_in_a_bits_source @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_enq_bits_corrupt <= auto_in_a_bits_corrupt @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    repeater.io_deq_ready <= auto_out_a_ready @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    gennum <= mux(reset, UInt<3>("h0"), _GEN_6) @[Fragmenter.scala 291:{29,29}]
    aToggle_r <= mux(aFirst, dToggle, aToggle_r) @[Reg.scala 16:16 17:{18,22}]
    stop(clock, and(not(UInt<1>("h1")), _T_5), 1) : assert @[Fragmenter.scala 202:16]
    stop(clock, and(not(UInt<1>("h1")), _T_5), 1) : assert_1 @[Fragmenter.scala 309:16]
    stop(clock, and(not(_T_17), _T_5), 1) : assert_2 @[Fragmenter.scala 312:16]
    printf(clock, and(_T_5, _T_20), "Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n") : printf_2 @[Fragmenter.scala 312:16]

  module TLMonitor_70_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_in_a_ready : UInt<1>
    input io_in_a_valid : UInt<1>
    input io_in_a_bits_opcode : UInt<3>
    input io_in_a_bits_size : UInt<4>
    input io_in_a_bits_address : UInt<32>
    input io_in_a_bits_mask : UInt<8>
    input io_in_d_ready : UInt<1>
    input io_in_d_valid : UInt<1>
    input io_in_d_bits_opcode : UInt<3>
    input io_in_d_bits_param : UInt<2>
    input io_in_d_bits_size : UInt<4>
    input io_in_d_bits_source : UInt<1>
    input io_in_d_bits_sink : UInt<4>
    input io_in_d_bits_denied : UInt<1>
    input io_in_d_bits_corrupt : UInt<1>

    inst plusarg_reader of plusarg_reader @[PlusArg.scala 80:11]
    inst plusarg_reader_1 of plusarg_reader @[PlusArg.scala 80:11]
    node _T_2 = not(reset) @[Monitor.scala 42:11]
    node _is_aligned_mask_T_1 = dshl(UInt<12>("hfff"), io_in_a_bits_size) @[package.scala 234:77]
    node _is_aligned_mask_T_2 = bits(_is_aligned_mask_T_1, 11, 0) @[package.scala 234:82]
    node is_aligned_mask = not(_is_aligned_mask_T_2) @[package.scala 234:46]
    node _GEN_71 = pad(is_aligned_mask, 32) @[Edges.scala 20:16]
    node _is_aligned_T = and(io_in_a_bits_address, _GEN_71) @[Edges.scala 20:16]
    node is_aligned = eq(_is_aligned_T, UInt<32>("h0")) @[Edges.scala 20:24]
    node mask_sizeOH_shiftAmount = bits(io_in_a_bits_size, 1, 0) @[OneHot.scala 63:49]
    node _mask_sizeOH_T_1 = dshl(UInt<1>("h1"), mask_sizeOH_shiftAmount) @[OneHot.scala 64:12]
    node _mask_sizeOH_T_2 = bits(_mask_sizeOH_T_1, 2, 0) @[OneHot.scala 64:27]
    node mask_sizeOH = or(_mask_sizeOH_T_2, UInt<3>("h1")) @[Misc.scala 201:81]
    node _mask_T = geq(io_in_a_bits_size, UInt<4>("h3")) @[Misc.scala 205:21]
    node mask_size = bits(mask_sizeOH, 2, 2) @[Misc.scala 208:26]
    node mask_bit = bits(io_in_a_bits_address, 2, 2) @[Misc.scala 209:26]
    node mask_nbit = not(mask_bit) @[Misc.scala 210:20]
    node _mask_acc_T = and(mask_size, mask_nbit) @[Misc.scala 214:38]
    node mask_acc = or(_mask_T, _mask_acc_T) @[Misc.scala 214:29]
    node _mask_acc_T_1 = and(mask_size, mask_bit) @[Misc.scala 214:38]
    node mask_acc_1 = or(_mask_T, _mask_acc_T_1) @[Misc.scala 214:29]
    node mask_size_1 = bits(mask_sizeOH, 1, 1) @[Misc.scala 208:26]
    node mask_bit_1 = bits(io_in_a_bits_address, 1, 1) @[Misc.scala 209:26]
    node mask_nbit_1 = not(mask_bit_1) @[Misc.scala 210:20]
    node mask_eq_2 = and(mask_nbit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_2 = and(mask_size_1, mask_eq_2) @[Misc.scala 214:38]
    node mask_acc_2 = or(mask_acc, _mask_acc_T_2) @[Misc.scala 214:29]
    node mask_eq_3 = and(mask_nbit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_3 = and(mask_size_1, mask_eq_3) @[Misc.scala 214:38]
    node mask_acc_3 = or(mask_acc, _mask_acc_T_3) @[Misc.scala 214:29]
    node mask_eq_4 = and(mask_bit, mask_nbit_1) @[Misc.scala 213:27]
    node _mask_acc_T_4 = and(mask_size_1, mask_eq_4) @[Misc.scala 214:38]
    node mask_acc_4 = or(mask_acc_1, _mask_acc_T_4) @[Misc.scala 214:29]
    node mask_eq_5 = and(mask_bit, mask_bit_1) @[Misc.scala 213:27]
    node _mask_acc_T_5 = and(mask_size_1, mask_eq_5) @[Misc.scala 214:38]
    node mask_acc_5 = or(mask_acc_1, _mask_acc_T_5) @[Misc.scala 214:29]
    node mask_size_2 = bits(mask_sizeOH, 0, 0) @[Misc.scala 208:26]
    node mask_bit_2 = bits(io_in_a_bits_address, 0, 0) @[Misc.scala 209:26]
    node mask_nbit_2 = not(mask_bit_2) @[Misc.scala 210:20]
    node mask_eq_6 = and(mask_eq_2, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_6 = and(mask_size_2, mask_eq_6) @[Misc.scala 214:38]
    node mask_acc_6 = or(mask_acc_2, _mask_acc_T_6) @[Misc.scala 214:29]
    node mask_eq_7 = and(mask_eq_2, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_7 = and(mask_size_2, mask_eq_7) @[Misc.scala 214:38]
    node mask_acc_7 = or(mask_acc_2, _mask_acc_T_7) @[Misc.scala 214:29]
    node mask_eq_8 = and(mask_eq_3, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_8 = and(mask_size_2, mask_eq_8) @[Misc.scala 214:38]
    node mask_acc_8 = or(mask_acc_3, _mask_acc_T_8) @[Misc.scala 214:29]
    node mask_eq_9 = and(mask_eq_3, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_9 = and(mask_size_2, mask_eq_9) @[Misc.scala 214:38]
    node mask_acc_9 = or(mask_acc_3, _mask_acc_T_9) @[Misc.scala 214:29]
    node mask_eq_10 = and(mask_eq_4, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_10 = and(mask_size_2, mask_eq_10) @[Misc.scala 214:38]
    node mask_acc_10 = or(mask_acc_4, _mask_acc_T_10) @[Misc.scala 214:29]
    node mask_eq_11 = and(mask_eq_4, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_11 = and(mask_size_2, mask_eq_11) @[Misc.scala 214:38]
    node mask_acc_11 = or(mask_acc_4, _mask_acc_T_11) @[Misc.scala 214:29]
    node mask_eq_12 = and(mask_eq_5, mask_nbit_2) @[Misc.scala 213:27]
    node _mask_acc_T_12 = and(mask_size_2, mask_eq_12) @[Misc.scala 214:38]
    node mask_acc_12 = or(mask_acc_5, _mask_acc_T_12) @[Misc.scala 214:29]
    node mask_eq_13 = and(mask_eq_5, mask_bit_2) @[Misc.scala 213:27]
    node _mask_acc_T_13 = and(mask_size_2, mask_eq_13) @[Misc.scala 214:38]
    node mask_acc_13 = or(mask_acc_5, _mask_acc_T_13) @[Misc.scala 214:29]
    node mask_lo_lo = cat(mask_acc_7, mask_acc_6) @[Cat.scala 31:58]
    node mask_lo_hi = cat(mask_acc_9, mask_acc_8) @[Cat.scala 31:58]
    node mask_lo = cat(mask_lo_hi, mask_lo_lo) @[Cat.scala 31:58]
    node mask_hi_lo = cat(mask_acc_11, mask_acc_10) @[Cat.scala 31:58]
    node mask_hi_hi = cat(mask_acc_13, mask_acc_12) @[Cat.scala 31:58]
    node mask_hi = cat(mask_hi_hi, mask_hi_lo) @[Cat.scala 31:58]
    node mask = cat(mask_hi, mask_lo) @[Cat.scala 31:58]
    node _T_7 = cvt(io_in_a_bits_address) @[Parameters.scala 137:49]
    node _T_15 = eq(io_in_a_bits_opcode, UInt<3>("h6")) @[Monitor.scala 81:25]
    node _T_17 = leq(io_in_a_bits_size, UInt<4>("hc")) @[Parameters.scala 92:42]
    node _T_25 = and(_T_7, SInt<33>("h-5000")) @[Parameters.scala 137:52]
    node _T_26 = asSInt(_T_25) @[Parameters.scala 137:52]
    node _T_27 = eq(_T_26, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_28 = xor(io_in_a_bits_address, UInt<32>("h3000")) @[Parameters.scala 137:31]
    node _T_29 = cvt(_T_28) @[Parameters.scala 137:49]
    node _T_30 = and(_T_29, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_31 = asSInt(_T_30) @[Parameters.scala 137:52]
    node _T_32 = eq(_T_31, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_33 = xor(io_in_a_bits_address, UInt<32>("h10000")) @[Parameters.scala 137:31]
    node _T_34 = cvt(_T_33) @[Parameters.scala 137:49]
    node _T_35 = and(_T_34, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_36 = asSInt(_T_35) @[Parameters.scala 137:52]
    node _T_37 = eq(_T_36, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_38 = xor(io_in_a_bits_address, UInt<32>("h100000")) @[Parameters.scala 137:31]
    node _T_39 = cvt(_T_38) @[Parameters.scala 137:49]
    node _T_40 = and(_T_39, SInt<33>("h-11000")) @[Parameters.scala 137:52]
    node _T_41 = asSInt(_T_40) @[Parameters.scala 137:52]
    node _T_42 = eq(_T_41, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_43 = xor(io_in_a_bits_address, UInt<32>("h2000000")) @[Parameters.scala 137:31]
    node _T_44 = cvt(_T_43) @[Parameters.scala 137:49]
    node _T_45 = and(_T_44, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_46 = asSInt(_T_45) @[Parameters.scala 137:52]
    node _T_47 = eq(_T_46, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_48 = xor(io_in_a_bits_address, UInt<32>("h2010000")) @[Parameters.scala 137:31]
    node _T_49 = cvt(_T_48) @[Parameters.scala 137:49]
    node _T_50 = and(_T_49, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_51 = asSInt(_T_50) @[Parameters.scala 137:52]
    node _T_52 = eq(_T_51, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_53 = xor(io_in_a_bits_address, UInt<32>("hc000000")) @[Parameters.scala 137:31]
    node _T_54 = cvt(_T_53) @[Parameters.scala 137:49]
    node _T_55 = and(_T_54, SInt<33>("h-4000000")) @[Parameters.scala 137:52]
    node _T_56 = asSInt(_T_55) @[Parameters.scala 137:52]
    node _T_57 = eq(_T_56, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_58 = xor(io_in_a_bits_address, UInt<32>("h54000000")) @[Parameters.scala 137:31]
    node _T_59 = cvt(_T_58) @[Parameters.scala 137:49]
    node _T_60 = and(_T_59, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_61 = asSInt(_T_60) @[Parameters.scala 137:52]
    node _T_62 = eq(_T_61, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_63 = or(_T_27, _T_32) @[Parameters.scala 671:42]
    node _T_71 = eq(UInt<4>("h6"), io_in_a_bits_size) @[Parameters.scala 91:48]
    node _T_73 = xor(io_in_a_bits_address, UInt<32>("h20000")) @[Parameters.scala 137:31]
    node _T_74 = cvt(_T_73) @[Parameters.scala 137:49]
    node _T_75 = and(_T_74, SInt<33>("h-10000")) @[Parameters.scala 137:52]
    node _T_76 = asSInt(_T_75) @[Parameters.scala 137:52]
    node _T_77 = eq(_T_76, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_78 = xor(io_in_a_bits_address, UInt<32>("h10000000")) @[Parameters.scala 137:31]
    node _T_79 = cvt(_T_78) @[Parameters.scala 137:49]
    node _T_80 = and(_T_79, SInt<33>("h-1000")) @[Parameters.scala 137:52]
    node _T_81 = asSInt(_T_80) @[Parameters.scala 137:52]
    node _T_82 = eq(_T_81, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_83 = xor(io_in_a_bits_address, UInt<32>("h80000000")) @[Parameters.scala 137:31]
    node _T_84 = cvt(_T_83) @[Parameters.scala 137:49]
    node _T_85 = and(_T_84, SInt<33>("h-10000000")) @[Parameters.scala 137:52]
    node _T_86 = asSInt(_T_85) @[Parameters.scala 137:52]
    node _T_87 = eq(_T_86, SInt<33>("h0")) @[Parameters.scala 137:67]
    node _T_88 = or(_T_77, _T_82) @[Parameters.scala 671:42]
    node _T_89 = or(_T_88, _T_87) @[Parameters.scala 671:42]
    node _T_90 = and(_T_71, _T_89) @[Parameters.scala 670:56]
    node _T_93 = and(_T_17, _T_90) @[Monitor.scala 82:72]
    node _T_96 = not(_T_93) @[Monitor.scala 42:11]
    node _T_178 = not(_mask_T) @[Monitor.scala 42:11]
    node _T_181 = not(is_aligned) @[Monitor.scala 42:11]
    node _T_186 = not(io_in_a_bits_mask) @[Monitor.scala 88:18]
    node _T_187 = eq(_T_186, UInt<8>("h0")) @[Monitor.scala 88:31]
    node _T_190 = not(_T_187) @[Monitor.scala 42:11]
    node _T_195 = eq(io_in_a_bits_opcode, UInt<3>("h7")) @[Monitor.scala 92:25]
    node _T_379 = eq(io_in_a_bits_opcode, UInt<3>("h4")) @[Monitor.scala 104:25]
    node _T_388 = not(_T_17) @[Monitor.scala 42:11]
    node _T_398 = and(_T_17, _T_32) @[Parameters.scala 670:56]
    node _T_400 = leq(io_in_a_bits_size, UInt<4>("h6")) @[Parameters.scala 92:42]
    node _T_453 = or(_T_27, _T_37) @[Parameters.scala 671:42]
    node _T_454 = or(_T_453, _T_77) @[Parameters.scala 671:42]
    node _T_455 = or(_T_454, _T_42) @[Parameters.scala 671:42]
    node _T_456 = or(_T_455, _T_47) @[Parameters.scala 671:42]
    node _T_457 = or(_T_456, _T_52) @[Parameters.scala 671:42]
    node _T_458 = or(_T_457, _T_57) @[Parameters.scala 671:42]
    node _T_459 = or(_T_458, _T_82) @[Parameters.scala 671:42]
    node _T_460 = or(_T_459, _T_62) @[Parameters.scala 671:42]
    node _T_461 = or(_T_460, _T_87) @[Parameters.scala 671:42]
    node _T_462 = and(_T_400, _T_461) @[Parameters.scala 670:56]
    node _T_464 = or(_T_398, _T_462) @[Parameters.scala 672:30]
    node _T_467 = not(_T_464) @[Monitor.scala 42:11]
    node _T_478 = eq(io_in_a_bits_mask, mask) @[Monitor.scala 110:30]
    node _T_481 = not(_T_478) @[Monitor.scala 42:11]
    node _T_486 = eq(io_in_a_bits_opcode, UInt<3>("h0")) @[Monitor.scala 114:25]
    node _T_547 = or(_T_27, _T_42) @[Parameters.scala 671:42]
    node _T_548 = or(_T_547, _T_47) @[Parameters.scala 671:42]
    node _T_549 = or(_T_548, _T_52) @[Parameters.scala 671:42]
    node _T_550 = or(_T_549, _T_57) @[Parameters.scala 671:42]
    node _T_551 = or(_T_550, _T_82) @[Parameters.scala 671:42]
    node _T_552 = or(_T_551, _T_62) @[Parameters.scala 671:42]
    node _T_553 = or(_T_552, _T_87) @[Parameters.scala 671:42]
    node _T_554 = and(_T_400, _T_553) @[Parameters.scala 670:56]
    node _T_569 = or(_T_398, _T_554) @[Parameters.scala 672:30]
    node _T_571 = and(_T_17, _T_569) @[Monitor.scala 115:71]
    node _T_574 = not(_T_571) @[Monitor.scala 42:11]
    node _T_589 = eq(io_in_a_bits_opcode, UInt<3>("h1")) @[Monitor.scala 122:25]
    node _T_688 = not(mask) @[Monitor.scala 127:33]
    node _T_689 = and(io_in_a_bits_mask, _T_688) @[Monitor.scala 127:31]
    node _T_690 = eq(_T_689, UInt<8>("h0")) @[Monitor.scala 127:40]
    node _T_693 = not(_T_690) @[Monitor.scala 42:11]
    node _T_694 = eq(io_in_a_bits_opcode, UInt<3>("h2")) @[Monitor.scala 130:25]
    node _T_702 = leq(io_in_a_bits_size, UInt<4>("h3")) @[Parameters.scala 92:42]
    node _T_741 = or(_T_63, _T_42) @[Parameters.scala 671:42]
    node _T_742 = or(_T_741, _T_47) @[Parameters.scala 671:42]
    node _T_743 = or(_T_742, _T_52) @[Parameters.scala 671:42]
    node _T_744 = or(_T_743, _T_57) @[Parameters.scala 671:42]
    node _T_745 = or(_T_744, _T_62) @[Parameters.scala 671:42]
    node _T_746 = and(_T_702, _T_745) @[Parameters.scala 670:56]
    node _T_761 = leq(io_in_a_bits_size, UInt<4>("h4")) @[Parameters.scala 92:42]
    node _T_774 = or(_T_82, _T_87) @[Parameters.scala 671:42]
    node _T_775 = and(_T_761, _T_774) @[Parameters.scala 670:56]
    node _T_778 = or(_T_746, _T_775) @[Parameters.scala 672:30]
    node _T_779 = and(_T_17, _T_778) @[Monitor.scala 131:74]
    node _T_782 = not(_T_779) @[Monitor.scala 42:11]
    node _T_797 = eq(io_in_a_bits_opcode, UInt<3>("h3")) @[Monitor.scala 138:25]
    node _T_900 = eq(io_in_a_bits_opcode, UInt<3>("h5")) @[Monitor.scala 146:25]
    node _T_981 = and(_T_400, _T_89) @[Parameters.scala 670:56]
    node _T_984 = or(_T_398, _T_981) @[Parameters.scala 672:30]
    node _T_985 = and(_T_17, _T_984) @[Monitor.scala 147:68]
    node _T_988 = not(_T_985) @[Monitor.scala 42:11]
    node _T_1007 = leq(io_in_d_bits_opcode, UInt<3>("h6")) @[Bundles.scala 42:24]
    node _T_1010 = not(_T_1007) @[Monitor.scala 49:11]
    node _source_ok_T_1 = not(io_in_d_bits_source) @[Parameters.scala 46:9]
    node _T_1011 = eq(io_in_d_bits_opcode, UInt<3>("h6")) @[Monitor.scala 310:25]
    node _T_1014 = not(_source_ok_T_1) @[Monitor.scala 49:11]
    node _T_1015 = geq(io_in_d_bits_size, UInt<4>("h3")) @[Monitor.scala 312:27]
    node _T_1018 = not(_T_1015) @[Monitor.scala 49:11]
    node _T_1019 = eq(io_in_d_bits_param, UInt<2>("h0")) @[Monitor.scala 313:28]
    node _T_1022 = not(_T_1019) @[Monitor.scala 49:11]
    node _T_1023 = not(io_in_d_bits_corrupt) @[Monitor.scala 314:15]
    node _T_1026 = not(_T_1023) @[Monitor.scala 49:11]
    node _T_1027 = not(io_in_d_bits_denied) @[Monitor.scala 315:15]
    node _T_1030 = not(_T_1027) @[Monitor.scala 49:11]
    node _T_1031 = eq(io_in_d_bits_opcode, UInt<3>("h4")) @[Monitor.scala 318:25]
    node _T_1042 = leq(io_in_d_bits_param, UInt<2>("h2")) @[Bundles.scala 102:26]
    node _T_1045 = not(_T_1042) @[Monitor.scala 49:11]
    node _T_1046 = neq(io_in_d_bits_param, UInt<2>("h2")) @[Monitor.scala 323:28]
    node _T_1049 = not(_T_1046) @[Monitor.scala 49:11]
    node _T_1059 = eq(io_in_d_bits_opcode, UInt<3>("h5")) @[Monitor.scala 328:25]
    node _T_1079 = or(_T_1027, io_in_d_bits_corrupt) @[Monitor.scala 334:30]
    node _T_1082 = not(_T_1079) @[Monitor.scala 49:11]
    node _T_1088 = eq(io_in_d_bits_opcode, UInt<3>("h0")) @[Monitor.scala 338:25]
    node _T_1105 = eq(io_in_d_bits_opcode, UInt<3>("h1")) @[Monitor.scala 346:25]
    node _T_1123 = eq(io_in_d_bits_opcode, UInt<3>("h2")) @[Monitor.scala 354:25]
    node _a_first_T = and(io_in_a_ready, io_in_a_valid) @[Decoupled.scala 50:35]
    node a_first_beats1_decode = shr(is_aligned_mask, 3) @[Edges.scala 219:59]
    node _a_first_beats1_opdata_T = bits(io_in_a_bits_opcode, 2, 2) @[Edges.scala 91:37]
    node a_first_beats1_opdata = not(_a_first_beats1_opdata_T) @[Edges.scala 91:28]
    node a_first_beats1 = mux(a_first_beats1_opdata, a_first_beats1_decode, UInt<9>("h0")) @[Edges.scala 220:14]
    reg a_first_counter : UInt<9>, clock with :
      reset => (UInt<1>("h0"), a_first_counter) @[Edges.scala 228:27]
    node _a_first_counter1_T = sub(a_first_counter, UInt<9>("h1")) @[Edges.scala 229:28]
    node a_first_counter1 = tail(_a_first_counter1_T, 1) @[Edges.scala 229:28]
    node a_first = eq(a_first_counter, UInt<9>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T = mux(a_first, a_first_beats1, a_first_counter1) @[Edges.scala 235:21]
    node _GEN_0 = mux(_a_first_T, _a_first_counter_T, a_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode) @[Monitor.scala 384:22]
    reg size : UInt<4>, clock with :
      reset => (UInt<1>("h0"), size) @[Monitor.scala 386:22]
    reg address : UInt<32>, clock with :
      reset => (UInt<1>("h0"), address) @[Monitor.scala 388:22]
    node _T_1152 = not(a_first) @[Monitor.scala 389:22]
    node _T_1153 = and(io_in_a_valid, _T_1152) @[Monitor.scala 389:19]
    node _T_1154 = eq(io_in_a_bits_opcode, opcode) @[Monitor.scala 390:32]
    node _T_1157 = not(_T_1154) @[Monitor.scala 42:11]
    node _T_1162 = eq(io_in_a_bits_size, size) @[Monitor.scala 392:32]
    node _T_1165 = not(_T_1162) @[Monitor.scala 42:11]
    node _T_1170 = eq(io_in_a_bits_address, address) @[Monitor.scala 394:32]
    node _T_1173 = not(_T_1170) @[Monitor.scala 42:11]
    node _T_1175 = and(_a_first_T, a_first) @[Monitor.scala 396:20]
    node _d_first_T = and(io_in_d_ready, io_in_d_valid) @[Decoupled.scala 50:35]
    node _d_first_beats1_decode_T_1 = dshl(UInt<12>("hfff"), io_in_d_bits_size) @[package.scala 234:77]
    node _d_first_beats1_decode_T_2 = bits(_d_first_beats1_decode_T_1, 11, 0) @[package.scala 234:82]
    node _d_first_beats1_decode_T_3 = not(_d_first_beats1_decode_T_2) @[package.scala 234:46]
    node d_first_beats1_decode = shr(_d_first_beats1_decode_T_3, 3) @[Edges.scala 219:59]
    node d_first_beats1_opdata = bits(io_in_d_bits_opcode, 0, 0) @[Edges.scala 105:36]
    node d_first_beats1 = mux(d_first_beats1_opdata, d_first_beats1_decode, UInt<9>("h0")) @[Edges.scala 220:14]
    reg d_first_counter : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter) @[Edges.scala 228:27]
    node _d_first_counter1_T = sub(d_first_counter, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1 = tail(_d_first_counter1_T, 1) @[Edges.scala 229:28]
    node d_first = eq(d_first_counter, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T = mux(d_first, d_first_beats1, d_first_counter1) @[Edges.scala 235:21]
    node _GEN_6 = mux(_d_first_T, _d_first_counter_T, d_first_counter) @[Edges.scala 234:17 235:15 228:27]
    reg opcode_1 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), opcode_1) @[Monitor.scala 535:22]
    reg param_1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), param_1) @[Monitor.scala 536:22]
    reg size_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), size_1) @[Monitor.scala 537:22]
    reg source_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), source_1) @[Monitor.scala 538:22]
    reg sink : UInt<4>, clock with :
      reset => (UInt<1>("h0"), sink) @[Monitor.scala 539:22]
    reg denied : UInt<1>, clock with :
      reset => (UInt<1>("h0"), denied) @[Monitor.scala 540:22]
    node _T_1176 = not(d_first) @[Monitor.scala 541:22]
    node _T_1177 = and(io_in_d_valid, _T_1176) @[Monitor.scala 541:19]
    node _T_1178 = eq(io_in_d_bits_opcode, opcode_1) @[Monitor.scala 542:29]
    node _T_1181 = not(_T_1178) @[Monitor.scala 49:11]
    node _T_1182 = eq(io_in_d_bits_param, param_1) @[Monitor.scala 543:29]
    node _T_1185 = not(_T_1182) @[Monitor.scala 49:11]
    node _T_1186 = eq(io_in_d_bits_size, size_1) @[Monitor.scala 544:29]
    node _T_1189 = not(_T_1186) @[Monitor.scala 49:11]
    node _T_1190 = eq(io_in_d_bits_source, source_1) @[Monitor.scala 545:29]
    node _T_1193 = not(_T_1190) @[Monitor.scala 49:11]
    node _T_1194 = eq(io_in_d_bits_sink, sink) @[Monitor.scala 546:29]
    node _T_1197 = not(_T_1194) @[Monitor.scala 49:11]
    node _T_1198 = eq(io_in_d_bits_denied, denied) @[Monitor.scala 547:29]
    node _T_1201 = not(_T_1198) @[Monitor.scala 49:11]
    node _T_1203 = and(_d_first_T, d_first) @[Monitor.scala 549:20]
    reg inflight : UInt<1>, clock with :
      reset => (UInt<1>("h0"), inflight) @[Monitor.scala 611:27]
    reg inflight_opcodes : UInt<4>, clock with :
      reset => (UInt<1>("h0"), inflight_opcodes) @[Monitor.scala 613:35]
    reg inflight_sizes : UInt<8>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes) @[Monitor.scala 615:33]
    reg a_first_counter_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), a_first_counter_1) @[Edges.scala 228:27]
    node _a_first_counter1_T_1 = sub(a_first_counter_1, UInt<9>("h1")) @[Edges.scala 229:28]
    node a_first_counter1_1 = tail(_a_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node a_first_1 = eq(a_first_counter_1, UInt<9>("h0")) @[Edges.scala 230:25]
    node _a_first_counter_T_1 = mux(a_first_1, a_first_beats1, a_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_13 = mux(_a_first_T, _a_first_counter_T_1, a_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    reg d_first_counter_1 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_1) @[Edges.scala 228:27]
    node _d_first_counter1_T_1 = sub(d_first_counter_1, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_1 = tail(_d_first_counter1_T_1, 1) @[Edges.scala 229:28]
    node d_first_1 = eq(d_first_counter_1, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_1 = mux(d_first_1, d_first_beats1, d_first_counter1_1) @[Edges.scala 235:21]
    node _GEN_14 = mux(_d_first_T, _d_first_counter_T_1, d_first_counter_1) @[Edges.scala 234:17 235:15 228:27]
    node _GEN_72 = shl(io_in_d_bits_source, 2) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T = pad(_GEN_72, 4) @[Monitor.scala 634:69]
    node _a_opcode_lookup_T_1 = dshr(inflight_opcodes, _a_opcode_lookup_T) @[Monitor.scala 634:44]
    node _a_opcode_lookup_T_4 = sub(UInt<16>("h10"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_opcode_lookup_T_5 = tail(_a_opcode_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_73 = pad(_a_opcode_lookup_T_1, 16) @[Monitor.scala 634:97]
    node _a_opcode_lookup_T_6 = and(_GEN_73, _a_opcode_lookup_T_5) @[Monitor.scala 634:97]
    node _GEN_74 = shr(_a_opcode_lookup_T_6, 1) @[Monitor.scala 634:152]
    node _a_opcode_lookup_T_7 = pad(_GEN_74, 16) @[Monitor.scala 634:152]
    node _a_size_lookup_T = shl(io_in_d_bits_source, 3) @[Monitor.scala 638:65]
    node _a_size_lookup_T_1 = dshr(inflight_sizes, _a_size_lookup_T) @[Monitor.scala 638:40]
    node _a_size_lookup_T_4 = sub(UInt<16>("h100"), UInt<16>("h1")) @[Monitor.scala 609:57]
    node _a_size_lookup_T_5 = tail(_a_size_lookup_T_4, 1) @[Monitor.scala 609:57]
    node _GEN_75 = pad(_a_size_lookup_T_1, 16) @[Monitor.scala 638:91]
    node _a_size_lookup_T_6 = and(_GEN_75, _a_size_lookup_T_5) @[Monitor.scala 638:91]
    node _GEN_76 = shr(_a_size_lookup_T_6, 1) @[Monitor.scala 638:144]
    node _a_size_lookup_T_7 = pad(_GEN_76, 16) @[Monitor.scala 638:144]
    node _T_1204 = and(io_in_a_valid, a_first_1) @[Monitor.scala 648:26]
    node _GEN_15 = mux(_T_1204, UInt<2>("h1"), UInt<2>("h0")) @[Monitor.scala 648:71 649:22]
    node _T_1207 = and(_a_first_T, a_first_1) @[Monitor.scala 652:27]
    node _a_opcodes_set_interm_T = shl(io_in_a_bits_opcode, 1) @[Monitor.scala 654:53]
    node _a_opcodes_set_interm_T_1 = or(_a_opcodes_set_interm_T, UInt<4>("h1")) @[Monitor.scala 654:61]
    node _a_sizes_set_interm_T = shl(io_in_a_bits_size, 1) @[Monitor.scala 655:51]
    node _a_sizes_set_interm_T_1 = or(_a_sizes_set_interm_T, UInt<5>("h1")) @[Monitor.scala 655:59]
    node a_opcodes_set_interm = mux(_T_1207, _a_opcodes_set_interm_T_1, UInt<4>("h0")) @[Monitor.scala 652:72 654:28]
    node _a_opcodes_set_T_1 = pad(a_opcodes_set_interm, 19) @[Monitor.scala 656:54]
    node a_sizes_set_interm = mux(_T_1207, _a_sizes_set_interm_T_1, UInt<5>("h0")) @[Monitor.scala 652:72 655:28]
    node _a_sizes_set_T_1 = pad(a_sizes_set_interm, 20) @[Monitor.scala 657:52]
    node _T_1211 = not(inflight) @[Monitor.scala 658:17]
    node _T_1214 = not(_T_1211) @[Monitor.scala 42:11]
    node _GEN_16 = mux(_T_1207, UInt<2>("h1"), UInt<2>("h0")) @[Monitor.scala 652:72 653:28]
    node _GEN_19 = mux(_T_1207, _a_opcodes_set_T_1, UInt<19>("h0")) @[Monitor.scala 652:72 656:28]
    node _GEN_20 = mux(_T_1207, _a_sizes_set_T_1, UInt<20>("h0")) @[Monitor.scala 652:72 657:28]
    node _T_1215 = and(io_in_d_valid, d_first_1) @[Monitor.scala 671:26]
    node _T_1217 = not(_T_1011) @[Monitor.scala 671:74]
    node _T_1218 = and(_T_1215, _T_1217) @[Monitor.scala 671:71]
    node _d_clr_wo_ready_T = dshl(UInt<1>("h1"), io_in_d_bits_source) @[OneHot.scala 57:35]
    node _GEN_21 = mux(_T_1218, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 671:90 672:22]
    node _T_1220 = and(_d_first_T, d_first_1) @[Monitor.scala 675:27]
    node _T_1223 = and(_T_1220, _T_1217) @[Monitor.scala 675:72]
    node _d_opcodes_clr_T_5 = dshl(_a_opcode_lookup_T_5, _a_opcode_lookup_T) @[Monitor.scala 677:76]
    node _d_sizes_clr_T_5 = dshl(_a_size_lookup_T_5, _a_size_lookup_T) @[Monitor.scala 678:74]
    node _GEN_22 = mux(_T_1223, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 675:91 676:21]
    node _GEN_23 = mux(_T_1223, _d_opcodes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 675:91 677:21]
    node _GEN_24 = mux(_T_1223, _d_sizes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 675:91 678:21]
    node same_cycle_resp = and(_T_1204, _source_ok_T_1) @[Monitor.scala 681:88]
    node _T_1228 = dshr(inflight, io_in_d_bits_source) @[Monitor.scala 682:25]
    node _T_1230 = or(_T_1228, same_cycle_resp) @[Monitor.scala 682:49]
    node _T_1233 = not(_T_1230) @[Monitor.scala 49:11]
    node _GEN_27 = mux(eq(UInt<3>("h2"), io_in_a_bits_opcode), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 685:{38,38}]
    node _GEN_28 = mux(eq(UInt<3>("h3"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_27) @[Monitor.scala 685:{38,38}]
    node _GEN_29 = mux(eq(UInt<3>("h4"), io_in_a_bits_opcode), UInt<3>("h1"), _GEN_28) @[Monitor.scala 685:{38,38}]
    node _GEN_30 = mux(eq(UInt<3>("h5"), io_in_a_bits_opcode), UInt<3>("h2"), _GEN_29) @[Monitor.scala 685:{38,38}]
    node _GEN_31 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_30) @[Monitor.scala 685:{38,38}]
    node _GEN_32 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_31) @[Monitor.scala 685:{38,38}]
    node _T_1234 = eq(io_in_d_bits_opcode, _GEN_32) @[Monitor.scala 685:38]
    node _GEN_39 = mux(eq(UInt<3>("h6"), io_in_a_bits_opcode), UInt<3>("h5"), _GEN_30) @[Monitor.scala 686:{39,39}]
    node _GEN_40 = mux(eq(UInt<3>("h7"), io_in_a_bits_opcode), UInt<3>("h4"), _GEN_39) @[Monitor.scala 686:{39,39}]
    node _T_1235 = eq(io_in_d_bits_opcode, _GEN_40) @[Monitor.scala 686:39]
    node _T_1236 = or(_T_1234, _T_1235) @[Monitor.scala 685:77]
    node _T_1239 = not(_T_1236) @[Monitor.scala 49:11]
    node _T_1240 = eq(io_in_a_bits_size, io_in_d_bits_size) @[Monitor.scala 687:36]
    node _T_1243 = not(_T_1240) @[Monitor.scala 49:11]
    node a_opcode_lookup = bits(_a_opcode_lookup_T_7, 3, 0)
    node _T_1244 = bits(a_opcode_lookup, 2, 0)
    node _GEN_43 = mux(eq(UInt<3>("h2"), _T_1244), UInt<3>("h1"), UInt<3>("h0")) @[Monitor.scala 689:{38,38}]
    node _GEN_44 = mux(eq(UInt<3>("h3"), _T_1244), UInt<3>("h1"), _GEN_43) @[Monitor.scala 689:{38,38}]
    node _GEN_45 = mux(eq(UInt<3>("h4"), _T_1244), UInt<3>("h1"), _GEN_44) @[Monitor.scala 689:{38,38}]
    node _GEN_46 = mux(eq(UInt<3>("h5"), _T_1244), UInt<3>("h2"), _GEN_45) @[Monitor.scala 689:{38,38}]
    node _GEN_47 = mux(eq(UInt<3>("h6"), _T_1244), UInt<3>("h4"), _GEN_46) @[Monitor.scala 689:{38,38}]
    node _GEN_48 = mux(eq(UInt<3>("h7"), _T_1244), UInt<3>("h4"), _GEN_47) @[Monitor.scala 689:{38,38}]
    node _T_1245 = eq(io_in_d_bits_opcode, _GEN_48) @[Monitor.scala 689:38]
    node _GEN_55 = mux(eq(UInt<3>("h6"), _T_1244), UInt<3>("h5"), _GEN_46) @[Monitor.scala 690:{38,38}]
    node _GEN_56 = mux(eq(UInt<3>("h7"), _T_1244), UInt<3>("h4"), _GEN_55) @[Monitor.scala 690:{38,38}]
    node _T_1247 = eq(io_in_d_bits_opcode, _GEN_56) @[Monitor.scala 690:38]
    node _T_1248 = or(_T_1245, _T_1247) @[Monitor.scala 689:72]
    node _T_1251 = not(_T_1248) @[Monitor.scala 49:11]
    node a_size_lookup = bits(_a_size_lookup_T_7, 7, 0)
    node _GEN_78 = pad(io_in_d_bits_size, 8) @[Monitor.scala 691:36]
    node _T_1252 = eq(_GEN_78, a_size_lookup) @[Monitor.scala 691:36]
    node _T_1255 = not(_T_1252) @[Monitor.scala 49:11]
    node _T_1257 = and(_T_1215, a_first_1) @[Monitor.scala 694:36]
    node _T_1258 = and(_T_1257, io_in_a_valid) @[Monitor.scala 694:47]
    node _T_1260 = and(_T_1258, _source_ok_T_1) @[Monitor.scala 694:65]
    node _T_1262 = and(_T_1260, _T_1217) @[Monitor.scala 694:116]
    node _T_1263 = not(io_in_d_ready) @[Monitor.scala 695:15]
    node _T_1264 = or(_T_1263, io_in_a_ready) @[Monitor.scala 695:32]
    node _T_1267 = not(_T_1264) @[Monitor.scala 49:11]
    node a_set_wo_ready = bits(_GEN_15, 0, 0)
    node d_clr_wo_ready = bits(_GEN_21, 0, 0)
    node _T_1268 = neq(a_set_wo_ready, d_clr_wo_ready) @[Monitor.scala 699:29]
    node _T_1269 = orr(a_set_wo_ready) @[Monitor.scala 699:67]
    node _T_1270 = not(_T_1269) @[Monitor.scala 699:51]
    node _T_1271 = or(_T_1268, _T_1270) @[Monitor.scala 699:48]
    node _T_1274 = not(_T_1271) @[Monitor.scala 49:11]
    node a_set = bits(_GEN_16, 0, 0)
    node _inflight_T = or(inflight, a_set) @[Monitor.scala 702:27]
    node d_clr = bits(_GEN_22, 0, 0)
    node _inflight_T_1 = not(d_clr) @[Monitor.scala 702:38]
    node _inflight_T_2 = and(_inflight_T, _inflight_T_1) @[Monitor.scala 702:36]
    node a_opcodes_set = bits(_GEN_19, 3, 0)
    node _inflight_opcodes_T = or(inflight_opcodes, a_opcodes_set) @[Monitor.scala 703:43]
    node d_opcodes_clr = bits(_GEN_23, 3, 0)
    node _inflight_opcodes_T_1 = not(d_opcodes_clr) @[Monitor.scala 703:62]
    node _inflight_opcodes_T_2 = and(_inflight_opcodes_T, _inflight_opcodes_T_1) @[Monitor.scala 703:60]
    node a_sizes_set = bits(_GEN_20, 7, 0)
    node _inflight_sizes_T = or(inflight_sizes, a_sizes_set) @[Monitor.scala 704:39]
    node d_sizes_clr = bits(_GEN_24, 7, 0)
    node _inflight_sizes_T_1 = not(d_sizes_clr) @[Monitor.scala 704:56]
    node _inflight_sizes_T_2 = and(_inflight_sizes_T, _inflight_sizes_T_1) @[Monitor.scala 704:54]
    reg watchdog : UInt<32>, clock with :
      reset => (UInt<1>("h0"), watchdog) @[Monitor.scala 706:27]
    node _T_1275 = orr(inflight) @[Monitor.scala 709:26]
    node _T_1276 = not(_T_1275) @[Monitor.scala 709:16]
    node _T_1277 = eq(plusarg_reader.out, UInt<32>("h0")) @[Monitor.scala 709:39]
    node _T_1278 = or(_T_1276, _T_1277) @[Monitor.scala 709:30]
    node _T_1279 = lt(watchdog, plusarg_reader.out) @[Monitor.scala 709:59]
    node _T_1280 = or(_T_1278, _T_1279) @[Monitor.scala 709:47]
    node _T_1283 = not(_T_1280) @[Monitor.scala 42:11]
    node _watchdog_T = add(watchdog, UInt<32>("h1")) @[Monitor.scala 711:26]
    node _watchdog_T_1 = tail(_watchdog_T, 1) @[Monitor.scala 711:26]
    node _T_1286 = or(_a_first_T, _d_first_T) @[Monitor.scala 712:27]
    node _GEN_57 = mux(_T_1286, UInt<32>("h0"), _watchdog_T_1) @[Monitor.scala 711:14 712:{47,58}]
    reg inflight_sizes_1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), inflight_sizes_1) @[Monitor.scala 725:35]
    reg d_first_counter_2 : UInt<9>, clock with :
      reset => (UInt<1>("h0"), d_first_counter_2) @[Edges.scala 228:27]
    node _d_first_counter1_T_2 = sub(d_first_counter_2, UInt<9>("h1")) @[Edges.scala 229:28]
    node d_first_counter1_2 = tail(_d_first_counter1_T_2, 1) @[Edges.scala 229:28]
    node d_first_2 = eq(d_first_counter_2, UInt<9>("h0")) @[Edges.scala 230:25]
    node _d_first_counter_T_2 = mux(d_first_2, d_first_beats1, d_first_counter1_2) @[Edges.scala 235:21]
    node _GEN_59 = mux(_d_first_T, _d_first_counter_T_2, d_first_counter_2) @[Edges.scala 234:17 235:15 228:27]
    node _c_size_lookup_T_1 = dshr(inflight_sizes_1, _a_size_lookup_T) @[Monitor.scala 747:42]
    node _GEN_82 = pad(_c_size_lookup_T_1, 16) @[Monitor.scala 747:93]
    node _c_size_lookup_T_6 = and(_GEN_82, _a_size_lookup_T_5) @[Monitor.scala 747:93]
    node _GEN_83 = shr(_c_size_lookup_T_6, 1) @[Monitor.scala 747:146]
    node _c_size_lookup_T_7 = pad(_GEN_83, 16) @[Monitor.scala 747:146]
    node _T_1304 = and(io_in_d_valid, d_first_2) @[Monitor.scala 779:26]
    node _T_1306 = and(_T_1304, _T_1011) @[Monitor.scala 779:71]
    node _GEN_66 = mux(_T_1306, _d_clr_wo_ready_T, UInt<2>("h0")) @[Monitor.scala 779:89 780:22]
    node _T_1308 = and(_d_first_T, d_first_2) @[Monitor.scala 783:27]
    node _T_1310 = and(_T_1308, _T_1011) @[Monitor.scala 783:72]
    node _GEN_69 = mux(_T_1310, _d_sizes_clr_T_5, UInt<31>("h0")) @[Monitor.scala 783:90 786:21]
    node _T_1314 = dshr(UInt<1>("h0"), io_in_d_bits_source) @[Monitor.scala 791:25]
    node _T_1319 = not(_T_1314) @[Monitor.scala 49:11]
    node _T_1320 = eq(io_in_d_bits_size, UInt<4>("h0")) @[Monitor.scala 793:36]
    node c_size_lookup = bits(_c_size_lookup_T_7, 7, 0)
    node _T_1324 = eq(_GEN_78, c_size_lookup) @[Monitor.scala 795:36]
    node _T_1327 = not(_T_1324) @[Monitor.scala 49:11]
    node d_clr_wo_ready_1 = bits(_GEN_66, 0, 0)
    node d_sizes_clr_1 = bits(_GEN_69, 7, 0)
    node _inflight_sizes_T_4 = not(d_sizes_clr_1) @[Monitor.scala 811:58]
    node _inflight_sizes_T_5 = and(inflight_sizes_1, _inflight_sizes_T_4) @[Monitor.scala 811:56]
    a_first_counter <= mux(reset, UInt<9>("h0"), _GEN_0) @[Edges.scala 228:{27,27}]
    opcode <= mux(_T_1175, io_in_a_bits_opcode, opcode) @[Monitor.scala 396:32 397:15 384:22]
    size <= mux(_T_1175, io_in_a_bits_size, size) @[Monitor.scala 396:32 399:15 386:22]
    address <= mux(_T_1175, io_in_a_bits_address, address) @[Monitor.scala 396:32 401:15 388:22]
    d_first_counter <= mux(reset, UInt<9>("h0"), _GEN_6) @[Edges.scala 228:{27,27}]
    opcode_1 <= mux(_T_1203, io_in_d_bits_opcode, opcode_1) @[Monitor.scala 549:32 550:15 535:22]
    param_1 <= mux(_T_1203, io_in_d_bits_param, param_1) @[Monitor.scala 549:32 551:15 536:22]
    size_1 <= mux(_T_1203, io_in_d_bits_size, size_1) @[Monitor.scala 549:32 552:15 537:22]
    source_1 <= mux(_T_1203, io_in_d_bits_source, source_1) @[Monitor.scala 549:32 553:15 538:22]
    sink <= mux(_T_1203, io_in_d_bits_sink, sink) @[Monitor.scala 549:32 554:15 539:22]
    denied <= mux(_T_1203, io_in_d_bits_denied, denied) @[Monitor.scala 549:32 555:15 540:22]
    inflight <= mux(reset, UInt<1>("h0"), _inflight_T_2) @[Monitor.scala 611:{27,27} 702:14]
    inflight_opcodes <= mux(reset, UInt<4>("h0"), _inflight_opcodes_T_2) @[Monitor.scala 613:{35,35} 703:22]
    inflight_sizes <= mux(reset, UInt<8>("h0"), _inflight_sizes_T_2) @[Monitor.scala 615:{33,33} 704:20]
    a_first_counter_1 <= mux(reset, UInt<9>("h0"), _GEN_13) @[Edges.scala 228:{27,27}]
    d_first_counter_1 <= mux(reset, UInt<9>("h0"), _GEN_14) @[Edges.scala 228:{27,27}]
    watchdog <= mux(reset, UInt<32>("h0"), _GEN_57) @[Monitor.scala 706:{27,27}]
    inflight_sizes_1 <= mux(reset, UInt<8>("h0"), _inflight_sizes_T_5) @[Monitor.scala 725:{35,35} 811:22]
    d_first_counter_2 <= mux(reset, UInt<9>("h0"), _GEN_59) @[Edges.scala 228:{27,27}]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(io_in_a_valid, _T_2)), 1) : assert_1 @[Monitor.scala 42:11]
    node _GEN_86 = and(io_in_a_valid, _T_15) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_93), and(_GEN_86, _T_2)), 1) : assert_2 @[Monitor.scala 42:11]
    node _GEN_88 = and(_GEN_86, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_88, _T_96), "Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_2 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_86, _T_2)), 1) : assert_3 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_86, _T_2), "Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_3 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_86, _T_2)), 1) : assert_4 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_86, _T_2)), 1) : assert_5 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_88, _T_178), "Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_5 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_86, _T_2)), 1) : assert_6 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_88, _T_181), "Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_6 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_86, _T_2)), 1) : assert_7 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_86, _T_2)), 1) : assert_8 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_88, _T_190), "Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_8 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_86, _T_2)), 1) : assert_9 @[Monitor.scala 42:11]
    node _GEN_103 = and(io_in_a_valid, _T_195) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_93), and(_GEN_103, _T_2)), 1) : assert_10 @[Monitor.scala 42:11]
    node _GEN_105 = and(_GEN_103, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_105, _T_96), "Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_10 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_103, _T_2)), 1) : assert_11 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_103, _T_2), "Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_11 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_103, _T_2)), 1) : assert_12 @[Monitor.scala 42:11]
    stop(clock, and(not(_mask_T), and(_GEN_103, _T_2)), 1) : assert_13 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_105, _T_178), "Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_13 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_103, _T_2)), 1) : assert_14 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_105, _T_181), "Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_14 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_103, _T_2)), 1) : assert_15 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h0")), and(_GEN_103, _T_2)), 1) : assert_16 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_103, _T_2), "Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_16 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_187), and(_GEN_103, _T_2)), 1) : assert_17 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_105, _T_190), "Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_17 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_103, _T_2)), 1) : assert_18 @[Monitor.scala 42:11]
    node _GEN_122 = and(io_in_a_valid, _T_379) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_17), and(_GEN_122, _T_2)), 1) : assert_19 @[Monitor.scala 42:11]
    node _GEN_124 = and(_GEN_122, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_124, _T_388), "Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_19 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_464), and(_GEN_122, _T_2)), 1) : assert_20 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_124, _T_467), "Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_20 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_122, _T_2)), 1) : assert_21 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_122, _T_2)), 1) : assert_22 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_124, _T_181), "Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_22 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_122, _T_2)), 1) : assert_23 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_122, _T_2)), 1) : assert_24 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_124, _T_481), "Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_24 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_122, _T_2)), 1) : assert_25 @[Monitor.scala 42:11]
    node _GEN_137 = and(io_in_a_valid, _T_486) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_571), and(_GEN_137, _T_2)), 1) : assert_26 @[Monitor.scala 42:11]
    node _GEN_139 = and(_GEN_137, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_139, _T_574), "Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_26 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_137, _T_2)), 1) : assert_27 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_137, _T_2)), 1) : assert_28 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_139, _T_181), "Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_28 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_137, _T_2)), 1) : assert_29 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_137, _T_2)), 1) : assert_30 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_139, _T_481), "Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_30 @[Monitor.scala 42:11]
    node _GEN_148 = and(io_in_a_valid, _T_589) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_571), and(_GEN_148, _T_2)), 1) : assert_31 @[Monitor.scala 42:11]
    node _GEN_150 = and(_GEN_148, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_150, _T_574), "Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_31 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_148, _T_2)), 1) : assert_32 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_148, _T_2)), 1) : assert_33 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_150, _T_181), "Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_33 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_148, _T_2)), 1) : assert_34 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_690), and(_GEN_148, _T_2)), 1) : assert_35 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_150, _T_693), "Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_35 @[Monitor.scala 42:11]
    node _GEN_159 = and(io_in_a_valid, _T_694) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_779), and(_GEN_159, _T_2)), 1) : assert_36 @[Monitor.scala 42:11]
    node _GEN_161 = and(_GEN_159, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_161, _T_782), "Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_36 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_159, _T_2)), 1) : assert_37 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_159, _T_2)), 1) : assert_38 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_161, _T_181), "Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_38 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_159, _T_2)), 1) : assert_39 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_159, _T_2)), 1) : assert_40 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_161, _T_481), "Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_40 @[Monitor.scala 42:11]
    node _GEN_170 = and(io_in_a_valid, _T_797) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_779), and(_GEN_170, _T_2)), 1) : assert_41 @[Monitor.scala 42:11]
    node _GEN_172 = and(_GEN_170, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_172, _T_782), "Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_41 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_170, _T_2)), 1) : assert_42 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_170, _T_2)), 1) : assert_43 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_172, _T_181), "Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_43 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_170, _T_2)), 1) : assert_44 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_170, _T_2)), 1) : assert_45 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_172, _T_481), "Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_45 @[Monitor.scala 42:11]
    node _GEN_181 = and(io_in_a_valid, _T_900) @[Monitor.scala 42:11]
    stop(clock, and(not(_T_985), and(_GEN_181, _T_2)), 1) : assert_46 @[Monitor.scala 42:11]
    node _GEN_183 = and(_GEN_181, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_988), "Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_46 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_181, _T_2)), 1) : assert_47 @[Monitor.scala 42:11]
    stop(clock, and(not(is_aligned), and(_GEN_181, _T_2)), 1) : assert_48 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_181), "Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_48 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_181, _T_2)), 1) : assert_49 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_478), and(_GEN_181, _T_2)), 1) : assert_50 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_183, _T_481), "Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_50 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_181, _T_2)), 1) : assert_51 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1007), and(io_in_d_valid, _T_2)), 1) : assert_52 @[Monitor.scala 49:11]
    node _GEN_193 = and(io_in_d_valid, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_193, _T_1010), "Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_52 @[Monitor.scala 49:11]
    node _GEN_194 = and(io_in_d_valid, _T_1011) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_194, _T_2)), 1) : assert_53 @[Monitor.scala 49:11]
    node _GEN_196 = and(_GEN_194, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_196, _T_1014), "Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_53 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_194, _T_2)), 1) : assert_54 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_196, _T_1018), "Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_54 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_194, _T_2)), 1) : assert_55 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_196, _T_1022), "Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_55 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_194, _T_2)), 1) : assert_56 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_196, _T_1026), "Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_56 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1027), and(_GEN_194, _T_2)), 1) : assert_57 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_196, _T_1030), "Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_57 @[Monitor.scala 49:11]
    node _GEN_209 = and(io_in_d_valid, _T_1031) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_209, _T_2)), 1) : assert_58 @[Monitor.scala 49:11]
    node _GEN_211 = and(_GEN_209, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_211, _T_1014), "Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_58 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_209, _T_2)), 1) : assert_59 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_209, _T_2)), 1) : assert_60 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_211, _T_1018), "Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_60 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1042), and(_GEN_209, _T_2)), 1) : assert_61 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_211, _T_1045), "Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_61 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1046), and(_GEN_209, _T_2)), 1) : assert_62 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_211, _T_1049), "Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_62 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_209, _T_2)), 1) : assert_63 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_211, _T_1026), "Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_63 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_209, _T_2)), 1) : assert_64 @[Monitor.scala 49:11]
    node _GEN_226 = and(io_in_d_valid, _T_1059) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_226, _T_2)), 1) : assert_65 @[Monitor.scala 49:11]
    node _GEN_228 = and(_GEN_226, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_228, _T_1014), "Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_65 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_226, _T_2)), 1) : assert_66 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1015), and(_GEN_226, _T_2)), 1) : assert_67 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_228, _T_1018), "Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_67 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1042), and(_GEN_226, _T_2)), 1) : assert_68 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_228, _T_1045), "Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_68 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1046), and(_GEN_226, _T_2)), 1) : assert_69 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_228, _T_1049), "Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_69 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1079), and(_GEN_226, _T_2)), 1) : assert_70 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_228, _T_1082), "Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_70 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_226, _T_2)), 1) : assert_71 @[Monitor.scala 49:11]
    node _GEN_243 = and(io_in_d_valid, _T_1088) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_243, _T_2)), 1) : assert_72 @[Monitor.scala 49:11]
    node _GEN_245 = and(_GEN_243, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_245, _T_1014), "Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_72 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_243, _T_2)), 1) : assert_73 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_245, _T_1022), "Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_73 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_243, _T_2)), 1) : assert_74 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_245, _T_1026), "Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_74 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_243, _T_2)), 1) : assert_75 @[Monitor.scala 49:11]
    node _GEN_253 = and(io_in_d_valid, _T_1105) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_253, _T_2)), 1) : assert_76 @[Monitor.scala 49:11]
    node _GEN_255 = and(_GEN_253, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_255, _T_1014), "Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_76 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_253, _T_2)), 1) : assert_77 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_255, _T_1022), "Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_77 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1079), and(_GEN_253, _T_2)), 1) : assert_78 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_255, _T_1082), "Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_78 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_253, _T_2)), 1) : assert_79 @[Monitor.scala 49:11]
    node _GEN_263 = and(io_in_d_valid, _T_1123) @[Monitor.scala 49:11]
    stop(clock, and(not(_source_ok_T_1), and(_GEN_263, _T_2)), 1) : assert_80 @[Monitor.scala 49:11]
    node _GEN_265 = and(_GEN_263, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_265, _T_1014), "Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_80 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1019), and(_GEN_263, _T_2)), 1) : assert_81 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_265, _T_1022), "Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_81 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1023), and(_GEN_263, _T_2)), 1) : assert_82 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_265, _T_1026), "Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_82 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), and(_GEN_263, _T_2)), 1) : assert_83 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_84 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_85 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_86 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1154), and(_T_1153, _T_2)), 1) : assert_87 @[Monitor.scala 42:11]
    node _GEN_273 = and(_T_1153, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_273, _T_1157), "Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_87 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_1153, _T_2)), 1) : assert_88 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1162), and(_T_1153, _T_2)), 1) : assert_89 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_273, _T_1165), "Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_89 @[Monitor.scala 42:11]
    stop(clock, and(not(UInt<1>("h1")), and(_T_1153, _T_2)), 1) : assert_90 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1170), and(_T_1153, _T_2)), 1) : assert_91 @[Monitor.scala 42:11]
    printf(clock, and(_GEN_273, _T_1173), "Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_91 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1178), and(_T_1177, _T_2)), 1) : assert_92 @[Monitor.scala 49:11]
    node _GEN_276 = and(_T_1177, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1181), "Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_92 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1182), and(_T_1177, _T_2)), 1) : assert_93 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1185), "Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_93 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1186), and(_T_1177, _T_2)), 1) : assert_94 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1189), "Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_94 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1190), and(_T_1177, _T_2)), 1) : assert_95 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1193), "Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_95 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1194), and(_T_1177, _T_2)), 1) : assert_96 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1197), "Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_96 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1198), and(_T_1177, _T_2)), 1) : assert_97 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_276, _T_1201), "Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_97 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1211), and(_T_1207, _T_2)), 1) : assert_98 @[Monitor.scala 42:11]
    node _GEN_282 = and(_T_1207, _T_2) @[Monitor.scala 42:11]
    printf(clock, and(_GEN_282, _T_1214), "Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_98 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1230), and(_T_1218, _T_2)), 1) : assert_99 @[Monitor.scala 49:11]
    node _GEN_283 = and(_T_1218, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_283, _T_1233), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_99 @[Monitor.scala 49:11]
    node _GEN_284 = and(_T_1218, same_cycle_resp) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1236), and(_GEN_284, _T_2)), 1) : assert_100 @[Monitor.scala 49:11]
    node _GEN_286 = and(_GEN_284, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_286, _T_1239), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_100 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1240), and(_GEN_284, _T_2)), 1) : assert_101 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_286, _T_1243), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_101 @[Monitor.scala 49:11]
    node _GEN_290 = not(same_cycle_resp) @[Monitor.scala 49:11]
    node _GEN_291 = and(_T_1218, _GEN_290) @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1248), and(_GEN_291, _T_2)), 1) : assert_102 @[Monitor.scala 49:11]
    node _GEN_294 = and(_GEN_291, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_294, _T_1251), "Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_102 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1252), and(_GEN_291, _T_2)), 1) : assert_103 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_294, _T_1255), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_103 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1264), and(_T_1262, _T_2)), 1) : assert_104 @[Monitor.scala 49:11]
    node _GEN_300 = and(_T_1262, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_300, _T_1267), "Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n") : printf_104 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1271), _T_2), 1) : assert_105 @[Monitor.scala 49:11]
    printf(clock, and(_T_2, _T_1274), "Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_105 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1280), _T_2), 1) : assert_106 @[Monitor.scala 42:11]
    printf(clock, and(_T_2, _T_1283), "Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n") : printf_106 @[Monitor.scala 42:11]
    stop(clock, and(not(_T_1314), and(_T_1306, _T_2)), 1) : assert_108 @[Monitor.scala 49:11]
    node _GEN_301 = and(_T_1306, _T_2) @[Monitor.scala 49:11]
    printf(clock, and(_GEN_301, _T_1319), "Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_108 @[Monitor.scala 49:11]
    stop(clock, and(not(_T_1324), and(_T_1306, _T_2)), 1) : assert_110 @[Monitor.scala 49:11]
    printf(clock, and(_GEN_301, _T_1327), "Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n") : printf_110 @[Monitor.scala 49:11]
    stop(clock, and(not(UInt<1>("h1")), _T_2), 1) : assert_113 @[Monitor.scala 42:11]

  module TLBuffer_24_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output auto_in_a_ready : UInt<1>
    input auto_in_a_valid : UInt<1>
    input auto_in_a_bits_opcode : UInt<3>
    input auto_in_a_bits_size : UInt<4>
    input auto_in_a_bits_address : UInt<32>
    input auto_in_a_bits_mask : UInt<8>
    input auto_in_a_bits_data : UInt<64>
    input auto_in_d_ready : UInt<1>
    output auto_in_d_valid : UInt<1>
    output auto_in_d_bits_data : UInt<64>
    input auto_out_a_ready : UInt<1>
    output auto_out_a_valid : UInt<1>
    output auto_out_a_bits_opcode : UInt<3>
    output auto_out_a_bits_param : UInt<3>
    output auto_out_a_bits_size : UInt<4>
    output auto_out_a_bits_source : UInt<1>
    output auto_out_a_bits_address : UInt<32>
    output auto_out_a_bits_mask : UInt<8>
    output auto_out_a_bits_data : UInt<64>
    output auto_out_a_bits_corrupt : UInt<1>
    output auto_out_d_ready : UInt<1>
    input auto_out_d_valid : UInt<1>
    input auto_out_d_bits_opcode : UInt<3>
    input auto_out_d_bits_param : UInt<2>
    input auto_out_d_bits_size : UInt<4>
    input auto_out_d_bits_source : UInt<1>
    input auto_out_d_bits_sink : UInt<4>
    input auto_out_d_bits_denied : UInt<1>
    input auto_out_d_bits_data : UInt<64>
    input auto_out_d_bits_corrupt : UInt<1>

    inst monitor of TLMonitor_70_inTestHarness @[Nodes.scala 24:25]
    inst bundleOut_0_a_q of Queue_4_inTestHarness @[Decoupled.scala 361:21]
    inst bundleIn_0_d_q of Queue_5_inTestHarness @[Decoupled.scala 361:21]
    auto_in_a_ready <= bundleOut_0_a_q.io_enq_ready @[Nodes.scala 1210:84 Decoupled.scala 365:17]
    auto_in_d_valid <= bundleIn_0_d_q.io_deq_valid @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_in_d_bits_data <= bundleIn_0_d_q.io_deq_bits_data @[Nodes.scala 1210:84 Buffer.scala 38:13]
    auto_out_a_valid <= bundleOut_0_a_q.io_deq_valid @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_opcode <= bundleOut_0_a_q.io_deq_bits_opcode @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_param <= bundleOut_0_a_q.io_deq_bits_param @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_size <= bundleOut_0_a_q.io_deq_bits_size @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_source <= bundleOut_0_a_q.io_deq_bits_source @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_address <= bundleOut_0_a_q.io_deq_bits_address @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_mask <= bundleOut_0_a_q.io_deq_bits_mask @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_data <= bundleOut_0_a_q.io_deq_bits_data @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_a_bits_corrupt <= bundleOut_0_a_q.io_deq_bits_corrupt @[Nodes.scala 1207:84 Buffer.scala 37:13]
    auto_out_d_ready <= bundleIn_0_d_q.io_enq_ready @[Nodes.scala 1207:84 Decoupled.scala 365:17]
    monitor.clock <= clock
    monitor.reset <= reset
    monitor.io_in_a_ready <= bundleOut_0_a_q.io_enq_ready @[Nodes.scala 1210:84 Decoupled.scala 365:17]
    monitor.io_in_a_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_a_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    monitor.io_in_d_valid <= bundleIn_0_d_q.io_deq_valid @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_opcode <= bundleIn_0_d_q.io_deq_bits_opcode @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_param <= bundleIn_0_d_q.io_deq_bits_param @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_size <= bundleIn_0_d_q.io_deq_bits_size @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_source <= bundleIn_0_d_q.io_deq_bits_source @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_sink <= bundleIn_0_d_q.io_deq_bits_sink @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_denied <= bundleIn_0_d_q.io_deq_bits_denied @[Nodes.scala 1210:84 Buffer.scala 38:13]
    monitor.io_in_d_bits_corrupt <= bundleIn_0_d_q.io_deq_bits_corrupt @[Nodes.scala 1210:84 Buffer.scala 38:13]
    bundleOut_0_a_q.clock <= clock
    bundleOut_0_a_q.reset <= reset
    bundleOut_0_a_q.io_enq_valid <= auto_in_a_valid @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_opcode <= auto_in_a_bits_opcode @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_size <= auto_in_a_bits_size @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_address <= auto_in_a_bits_address @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_mask <= auto_in_a_bits_mask @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_enq_bits_data <= auto_in_a_bits_data @[Nodes.scala 1210:84 LazyModule.scala 309:16]
    bundleOut_0_a_q.io_deq_ready <= auto_out_a_ready @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.clock <= clock
    bundleIn_0_d_q.reset <= reset
    bundleIn_0_d_q.io_enq_valid <= auto_out_d_valid @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_opcode <= auto_out_d_bits_opcode @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_param <= auto_out_d_bits_param @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_size <= auto_out_d_bits_size @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_source <= auto_out_d_bits_source @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_sink <= auto_out_d_bits_sink @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_denied <= auto_out_d_bits_denied @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_data <= auto_out_d_bits_data @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_enq_bits_corrupt <= auto_out_d_bits_corrupt @[Nodes.scala 1207:84 LazyModule.scala 311:12]
    bundleIn_0_d_q.io_deq_ready <= auto_in_d_ready @[Nodes.scala 1210:84 LazyModule.scala 309:16]

  module SerialRAM_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_ser_in_ready : UInt<1>
    output io_ser_in_valid : UInt<1>
    output io_ser_in_bits : UInt<32>
    output io_ser_out_ready : UInt<1>
    input io_ser_out_valid : UInt<1>
    input io_ser_out_bits : UInt<32>
    output io_tsi_ser_in_ready : UInt<1>
    input io_tsi_ser_in_valid : UInt<1>
    input io_tsi_ser_in_bits : UInt<32>
    input io_tsi_ser_out_ready : UInt<1>
    output io_tsi_ser_out_valid : UInt<1>
    output io_tsi_ser_out_bits : UInt<32>

    inst adapter of SerialAdapter_inTestHarness @[SerialAdapter.scala 446:27]
    inst serdesser of TLSerdesser_1_inTestHarness @[SerialAdapter.scala 447:29]
    inst srams of TLRAM_inTestHarness @[SerialAdapter.scala 454:15]
    inst rom of TLROM_1_inTestHarness @[SerialAdapter.scala 433:25]
    inst xbar of TLXbar_11_inTestHarness @[Xbar.scala 142:26]
    inst buffer of TLBuffer_23_inTestHarness @[Buffer.scala 68:28]
    inst fragmenter of TLFragmenter_9_inTestHarness @[Fragmenter.scala 333:34]
    inst fragmenter_1 of TLFragmenter_10_inTestHarness @[Fragmenter.scala 333:34]
    inst buffer_1 of TLBuffer_24_inTestHarness @[Buffer.scala 68:28]
    io_ser_in_valid <= serdesser.io_ser_out_valid @[SerialAdapter.scala 476:15]
    io_ser_in_bits <= serdesser.io_ser_out_bits @[SerialAdapter.scala 476:15]
    io_ser_out_ready <= serdesser.io_ser_in_ready @[SerialAdapter.scala 475:32]
    io_tsi_ser_in_ready <= adapter.io_serial_in_ready @[SerialAdapter.scala 477:16]
    io_tsi_ser_out_valid <= adapter.io_serial_out_valid @[SerialAdapter.scala 477:16]
    io_tsi_ser_out_bits <= adapter.io_serial_out_bits @[SerialAdapter.scala 477:16]
    adapter.clock <= clock
    adapter.reset <= reset
    adapter.auto_out_a_ready <= buffer_1.auto_in_a_ready @[LazyModule.scala 298:16]
    adapter.auto_out_d_valid <= buffer_1.auto_in_d_valid @[LazyModule.scala 298:16]
    adapter.auto_out_d_bits_data <= buffer_1.auto_in_d_bits_data @[LazyModule.scala 298:16]
    adapter.io_serial_in_valid <= io_tsi_ser_in_valid @[SerialAdapter.scala 477:16]
    adapter.io_serial_in_bits <= io_tsi_ser_in_bits @[SerialAdapter.scala 477:16]
    adapter.io_serial_out_ready <= io_tsi_ser_out_ready @[SerialAdapter.scala 477:16]
    serdesser.clock <= clock
    serdesser.reset <= reset
    serdesser.auto_manager_in_a_valid <= buffer_1.auto_out_a_valid @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_opcode <= buffer_1.auto_out_a_bits_opcode @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_param <= buffer_1.auto_out_a_bits_param @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_size <= buffer_1.auto_out_a_bits_size @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_source <= buffer_1.auto_out_a_bits_source @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_address <= buffer_1.auto_out_a_bits_address @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_mask <= buffer_1.auto_out_a_bits_mask @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_data <= buffer_1.auto_out_a_bits_data @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_a_bits_corrupt <= buffer_1.auto_out_a_bits_corrupt @[LazyModule.scala 296:16]
    serdesser.auto_manager_in_d_ready <= buffer_1.auto_out_d_ready @[LazyModule.scala 296:16]
    serdesser.auto_client_out_a_ready <= xbar.auto_in_a_ready @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_valid <= xbar.auto_in_d_valid @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_opcode <= xbar.auto_in_d_bits_opcode @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_param <= xbar.auto_in_d_bits_param @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_size <= xbar.auto_in_d_bits_size @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_source <= xbar.auto_in_d_bits_source @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_sink <= xbar.auto_in_d_bits_sink @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_denied <= xbar.auto_in_d_bits_denied @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_data <= xbar.auto_in_d_bits_data @[LazyModule.scala 298:16]
    serdesser.auto_client_out_d_bits_corrupt <= xbar.auto_in_d_bits_corrupt @[LazyModule.scala 298:16]
    serdesser.io_ser_in_valid <= io_ser_out_valid @[SerialAdapter.scala 475:32]
    serdesser.io_ser_in_bits <= io_ser_out_bits @[SerialAdapter.scala 475:32]
    serdesser.io_ser_out_ready <= io_ser_in_ready @[SerialAdapter.scala 476:15]
    srams.clock <= clock
    srams.reset <= reset
    srams.auto_in_a_valid <= buffer.auto_out_a_valid @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_opcode <= buffer.auto_out_a_bits_opcode @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_param <= buffer.auto_out_a_bits_param @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_size <= buffer.auto_out_a_bits_size @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_source <= buffer.auto_out_a_bits_source @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_address <= buffer.auto_out_a_bits_address @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_mask <= buffer.auto_out_a_bits_mask @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_data <= buffer.auto_out_a_bits_data @[LazyModule.scala 296:16]
    srams.auto_in_a_bits_corrupt <= buffer.auto_out_a_bits_corrupt @[LazyModule.scala 296:16]
    srams.auto_in_d_ready <= buffer.auto_out_d_ready @[LazyModule.scala 296:16]
    rom.clock <= clock
    rom.reset <= reset
    rom.auto_in_a_valid <= fragmenter_1.auto_out_a_valid @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_opcode <= fragmenter_1.auto_out_a_bits_opcode @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_param <= fragmenter_1.auto_out_a_bits_param @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_size <= fragmenter_1.auto_out_a_bits_size @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_source <= fragmenter_1.auto_out_a_bits_source @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_address <= fragmenter_1.auto_out_a_bits_address @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_mask <= fragmenter_1.auto_out_a_bits_mask @[LazyModule.scala 296:16]
    rom.auto_in_a_bits_corrupt <= fragmenter_1.auto_out_a_bits_corrupt @[LazyModule.scala 296:16]
    rom.auto_in_d_ready <= fragmenter_1.auto_out_d_ready @[LazyModule.scala 296:16]
    xbar.clock <= clock
    xbar.reset <= reset
    xbar.auto_in_a_valid <= serdesser.auto_client_out_a_valid @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_opcode <= serdesser.auto_client_out_a_bits_opcode @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_param <= serdesser.auto_client_out_a_bits_param @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_size <= serdesser.auto_client_out_a_bits_size @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_source <= serdesser.auto_client_out_a_bits_source @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_address <= serdesser.auto_client_out_a_bits_address @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_mask <= serdesser.auto_client_out_a_bits_mask @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_data <= serdesser.auto_client_out_a_bits_data @[LazyModule.scala 298:16]
    xbar.auto_in_a_bits_corrupt <= serdesser.auto_client_out_a_bits_corrupt @[LazyModule.scala 298:16]
    xbar.auto_in_d_ready <= serdesser.auto_client_out_d_ready @[LazyModule.scala 298:16]
    xbar.auto_out_1_a_ready <= fragmenter_1.auto_in_a_ready @[LazyModule.scala 298:16]
    xbar.auto_out_1_d_valid <= fragmenter_1.auto_in_d_valid @[LazyModule.scala 298:16]
    xbar.auto_out_1_d_bits_size <= fragmenter_1.auto_in_d_bits_size @[LazyModule.scala 298:16]
    xbar.auto_out_1_d_bits_source <= fragmenter_1.auto_in_d_bits_source @[LazyModule.scala 298:16]
    xbar.auto_out_1_d_bits_data <= fragmenter_1.auto_in_d_bits_data @[LazyModule.scala 298:16]
    xbar.auto_out_0_a_ready <= fragmenter.auto_in_a_ready @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_valid <= fragmenter.auto_in_d_valid @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_opcode <= fragmenter.auto_in_d_bits_opcode @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_param <= fragmenter.auto_in_d_bits_param @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_size <= fragmenter.auto_in_d_bits_size @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_source <= fragmenter.auto_in_d_bits_source @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_sink <= fragmenter.auto_in_d_bits_sink @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_denied <= fragmenter.auto_in_d_bits_denied @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_data <= fragmenter.auto_in_d_bits_data @[LazyModule.scala 298:16]
    xbar.auto_out_0_d_bits_corrupt <= fragmenter.auto_in_d_bits_corrupt @[LazyModule.scala 298:16]
    buffer.clock <= clock
    buffer.reset <= reset
    buffer.auto_in_a_valid <= fragmenter.auto_out_a_valid @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_opcode <= fragmenter.auto_out_a_bits_opcode @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_param <= fragmenter.auto_out_a_bits_param @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_size <= fragmenter.auto_out_a_bits_size @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_source <= fragmenter.auto_out_a_bits_source @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_address <= fragmenter.auto_out_a_bits_address @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_mask <= fragmenter.auto_out_a_bits_mask @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_data <= fragmenter.auto_out_a_bits_data @[LazyModule.scala 296:16]
    buffer.auto_in_a_bits_corrupt <= fragmenter.auto_out_a_bits_corrupt @[LazyModule.scala 296:16]
    buffer.auto_in_d_ready <= fragmenter.auto_out_d_ready @[LazyModule.scala 296:16]
    buffer.auto_out_a_ready <= srams.auto_in_a_ready @[LazyModule.scala 296:16]
    buffer.auto_out_d_valid <= srams.auto_in_d_valid @[LazyModule.scala 296:16]
    buffer.auto_out_d_bits_opcode <= srams.auto_in_d_bits_opcode @[LazyModule.scala 296:16]
    buffer.auto_out_d_bits_size <= srams.auto_in_d_bits_size @[LazyModule.scala 296:16]
    buffer.auto_out_d_bits_source <= srams.auto_in_d_bits_source @[LazyModule.scala 296:16]
    buffer.auto_out_d_bits_data <= srams.auto_in_d_bits_data @[LazyModule.scala 296:16]
    fragmenter.clock <= clock
    fragmenter.reset <= reset
    fragmenter.auto_in_a_valid <= xbar.auto_out_0_a_valid @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_opcode <= xbar.auto_out_0_a_bits_opcode @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_param <= xbar.auto_out_0_a_bits_param @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_size <= xbar.auto_out_0_a_bits_size @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_source <= xbar.auto_out_0_a_bits_source @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_address <= xbar.auto_out_0_a_bits_address @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_mask <= xbar.auto_out_0_a_bits_mask @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_data <= xbar.auto_out_0_a_bits_data @[LazyModule.scala 298:16]
    fragmenter.auto_in_a_bits_corrupt <= xbar.auto_out_0_a_bits_corrupt @[LazyModule.scala 298:16]
    fragmenter.auto_in_d_ready <= xbar.auto_out_0_d_ready @[LazyModule.scala 298:16]
    fragmenter.auto_out_a_ready <= buffer.auto_in_a_ready @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_valid <= buffer.auto_in_d_valid @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_opcode <= buffer.auto_in_d_bits_opcode @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_param <= buffer.auto_in_d_bits_param @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_size <= buffer.auto_in_d_bits_size @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_source <= buffer.auto_in_d_bits_source @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_sink <= buffer.auto_in_d_bits_sink @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_denied <= buffer.auto_in_d_bits_denied @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_data <= buffer.auto_in_d_bits_data @[LazyModule.scala 296:16]
    fragmenter.auto_out_d_bits_corrupt <= buffer.auto_in_d_bits_corrupt @[LazyModule.scala 296:16]
    fragmenter_1.clock <= clock
    fragmenter_1.reset <= reset
    fragmenter_1.auto_in_a_valid <= xbar.auto_out_1_a_valid @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_opcode <= xbar.auto_out_1_a_bits_opcode @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_param <= xbar.auto_out_1_a_bits_param @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_size <= xbar.auto_out_1_a_bits_size @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_source <= xbar.auto_out_1_a_bits_source @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_address <= xbar.auto_out_1_a_bits_address @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_mask <= xbar.auto_out_1_a_bits_mask @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_a_bits_corrupt <= xbar.auto_out_1_a_bits_corrupt @[LazyModule.scala 298:16]
    fragmenter_1.auto_in_d_ready <= xbar.auto_out_1_d_ready @[LazyModule.scala 298:16]
    fragmenter_1.auto_out_a_ready <= rom.auto_in_a_ready @[LazyModule.scala 296:16]
    fragmenter_1.auto_out_d_valid <= rom.auto_in_d_valid @[LazyModule.scala 296:16]
    fragmenter_1.auto_out_d_bits_size <= rom.auto_in_d_bits_size @[LazyModule.scala 296:16]
    fragmenter_1.auto_out_d_bits_source <= rom.auto_in_d_bits_source @[LazyModule.scala 296:16]
    fragmenter_1.auto_out_d_bits_data <= rom.auto_in_d_bits_data @[LazyModule.scala 296:16]
    buffer_1.clock <= clock
    buffer_1.reset <= reset
    buffer_1.auto_in_a_valid <= adapter.auto_out_a_valid @[LazyModule.scala 298:16]
    buffer_1.auto_in_a_bits_opcode <= adapter.auto_out_a_bits_opcode @[LazyModule.scala 298:16]
    buffer_1.auto_in_a_bits_size <= adapter.auto_out_a_bits_size @[LazyModule.scala 298:16]
    buffer_1.auto_in_a_bits_address <= adapter.auto_out_a_bits_address @[LazyModule.scala 298:16]
    buffer_1.auto_in_a_bits_mask <= adapter.auto_out_a_bits_mask @[LazyModule.scala 298:16]
    buffer_1.auto_in_a_bits_data <= adapter.auto_out_a_bits_data @[LazyModule.scala 298:16]
    buffer_1.auto_in_d_ready <= adapter.auto_out_d_ready @[LazyModule.scala 298:16]
    buffer_1.auto_out_a_ready <= serdesser.auto_manager_in_a_ready @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_valid <= serdesser.auto_manager_in_d_valid @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_opcode <= serdesser.auto_manager_in_d_bits_opcode @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_param <= serdesser.auto_manager_in_d_bits_param @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_size <= serdesser.auto_manager_in_d_bits_size @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_source <= serdesser.auto_manager_in_d_bits_source @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_sink <= serdesser.auto_manager_in_d_bits_sink @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_denied <= serdesser.auto_manager_in_d_bits_denied @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_data <= serdesser.auto_manager_in_d_bits_data @[LazyModule.scala 296:16]
    buffer_1.auto_out_d_bits_corrupt <= serdesser.auto_manager_in_d_bits_corrupt @[LazyModule.scala 296:16]

  extmodule SimSerial :
    input clock : Clock
    input reset : UInt<1>
    input serial_in_ready : UInt<1>
    output serial_in_valid : UInt<1>
    output serial_in_bits : UInt<32>
    output serial_out_ready : UInt<1>
    input serial_out_valid : UInt<1>
    input serial_out_bits : UInt<32>
    output exit : UInt<1>
    defname = SimSerial

  extmodule plusarg_reader_144 :
    output out : UInt<1>
    defname = plusarg_reader
    parameter FORMAT = "custom_boot_pin=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 1

  extmodule SimDRAM :
    input clock : Clock
    input reset : UInt<1>
    output axi_aw_ready : UInt<1>
    input axi_aw_valid : UInt<1>
    input axi_aw_bits_id : UInt<4>
    input axi_aw_bits_addr : UInt<32>
    input axi_aw_bits_len : UInt<8>
    input axi_aw_bits_size : UInt<3>
    input axi_aw_bits_burst : UInt<2>
    input axi_aw_bits_lock : UInt<1>
    input axi_aw_bits_cache : UInt<4>
    input axi_aw_bits_prot : UInt<3>
    input axi_aw_bits_qos : UInt<4>
    output axi_w_ready : UInt<1>
    input axi_w_valid : UInt<1>
    input axi_w_bits_data : UInt<64>
    input axi_w_bits_strb : UInt<8>
    input axi_w_bits_last : UInt<1>
    input axi_b_ready : UInt<1>
    output axi_b_valid : UInt<1>
    output axi_b_bits_id : UInt<4>
    output axi_b_bits_resp : UInt<2>
    output axi_ar_ready : UInt<1>
    input axi_ar_valid : UInt<1>
    input axi_ar_bits_id : UInt<4>
    input axi_ar_bits_addr : UInt<32>
    input axi_ar_bits_len : UInt<8>
    input axi_ar_bits_size : UInt<3>
    input axi_ar_bits_burst : UInt<2>
    input axi_ar_bits_lock : UInt<1>
    input axi_ar_bits_cache : UInt<4>
    input axi_ar_bits_prot : UInt<3>
    input axi_ar_bits_qos : UInt<4>
    input axi_r_ready : UInt<1>
    output axi_r_valid : UInt<1>
    output axi_r_bits_id : UInt<4>
    output axi_r_bits_data : UInt<64>
    output axi_r_bits_resp : UInt<2>
    output axi_r_bits_last : UInt<1>
    defname = SimDRAM
    parameter LINE_SIZE = 64
    parameter CLOCK_HZ = 100000000
    parameter ID_BITS = 4
    parameter ADDR_BITS = 32
    parameter MEM_SIZE = 268435456
    parameter DATA_BITS = 64

  module Queue_50_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<8>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<8>

    mem ram : @[Decoupled.scala 259:95]
      data-type => UInt<8>
      depth => 128
      read-latency => 0
      write-latency => 1
      reader => io_deq_bits_MPORT
      writer => MPORT
      read-under-write => undefined
    reg enq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), enq_ptr_value) @[Counter.scala 62:40]
    reg deq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), deq_ptr_value) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 262:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 263:33]
    node _empty_T = not(maybe_full) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 50:35]
    node _value_T = add(enq_ptr_value, UInt<7>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    node _GEN_5 = mux(do_enq, _value_T_1, enq_ptr_value) @[Decoupled.scala 272:16 Counter.scala 78:15 62:40]
    node _value_T_2 = add(deq_ptr_value, UInt<7>("h1")) @[Counter.scala 78:24]
    node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_6 = mux(do_deq, _value_T_3, deq_ptr_value) @[Decoupled.scala 276:16 Counter.scala 78:15 62:40]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    node _GEN_7 = mux(_T, do_enq, maybe_full) @[Decoupled.scala 279:27 280:16 262:27]
    io_enq_ready <= not(full) @[Decoupled.scala 289:19]
    io_deq_valid <= not(empty) @[Decoupled.scala 288:19]
    io_deq_bits <= ram.io_deq_bits_MPORT.data @[Decoupled.scala 296:17]
    ram.io_deq_bits_MPORT.addr <= deq_ptr_value @[Decoupled.scala 296:23]
    ram.io_deq_bits_MPORT.en <= UInt<1>("h1") @[Decoupled.scala 296:23]
    ram.io_deq_bits_MPORT.clk <= clock @[Decoupled.scala 296:23]
    ram.MPORT.addr <= enq_ptr_value @[Decoupled.scala 272:16 273:8]
    ram.MPORT.en <= and(io_enq_ready, io_enq_valid) @[Decoupled.scala 50:35]
    ram.MPORT.clk <= clock @[Decoupled.scala 272:16 273:8]
    ram.MPORT.data <= io_enq_bits @[Decoupled.scala 272:16 273:24]
    ram.MPORT.mask <= UInt<1>("h1") @[Decoupled.scala 272:16 273:24]
    enq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_5) @[Counter.scala 62:{40,40}]
    deq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_6) @[Counter.scala 62:{40,40}]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 262:{27,27}]

  extmodule SimUART :
    input clock : Clock
    input reset : UInt<1>
    input serial_in_ready : UInt<1>
    output serial_in_valid : UInt<1>
    output serial_in_bits : UInt<8>
    output serial_out_ready : UInt<1>
    input serial_out_valid : UInt<1>
    input serial_out_bits : UInt<8>
    defname = SimUART
    parameter UARTNO = 0

  module UARTAdapter_inTestHarness :
    input clock : Clock
    input reset : UInt<1>
    input io_uart_txd : UInt<1>
    output io_uart_rxd : UInt<1>

    inst txfifo of Queue_50_inTestHarness @[UARTAdapter.scala 32:22]
    inst rxfifo of Queue_50_inTestHarness @[UARTAdapter.scala 33:22]
    inst sim of SimUART @[UARTAdapter.scala 108:19]
    reg txState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txState) @[UARTAdapter.scala 38:24]
    reg txData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), txData) @[UARTAdapter.scala 39:19]
    node _T = eq(txState, UInt<2>("h2")) @[UARTAdapter.scala 41:49]
    node _T_1 = and(_T, txfifo.io_enq_ready) @[UARTAdapter.scala 41:61]
    reg txDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), txDataIdx) @[Counter.scala 62:40]
    node wrap_wrap = eq(txDataIdx, UInt<3>("h7")) @[Counter.scala 74:24]
    node _wrap_value_T = add(txDataIdx, UInt<3>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
    node _GEN_0 = mux(_T_1, _wrap_value_T_1, txDataIdx) @[Counter.scala 120:16 78:15 62:40]
    node txDataWrap = and(_T_1, wrap_wrap) @[Counter.scala 120:{16,23}]
    node _T_2 = eq(txState, UInt<2>("h1")) @[UARTAdapter.scala 43:51]
    node _T_3 = and(_T_2, txfifo.io_enq_ready) @[UARTAdapter.scala 43:63]
    reg txBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), txBaudCount) @[Counter.scala 62:40]
    node wrap_wrap_1 = eq(txBaudCount, UInt<10>("h363")) @[Counter.scala 74:24]
    node _wrap_value_T_2 = add(txBaudCount, UInt<10>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_3 = tail(_wrap_value_T_2, 1) @[Counter.scala 78:24]
    node _GEN_2 = mux(wrap_wrap_1, UInt<10>("h0"), _wrap_value_T_3) @[Counter.scala 78:15 88:{20,28}]
    node _GEN_3 = mux(_T_3, _GEN_2, txBaudCount) @[Counter.scala 120:16 62:40]
    node txBaudWrap = and(_T_3, wrap_wrap_1) @[Counter.scala 120:{16,23}]
    node _T_4 = eq(txState, UInt<2>("h0")) @[UARTAdapter.scala 44:53]
    node _T_5 = not(io_uart_txd) @[UARTAdapter.scala 44:80]
    node _T_6 = and(_T_4, _T_5) @[UARTAdapter.scala 44:65]
    node _T_7 = and(_T_6, txfifo.io_enq_ready) @[UARTAdapter.scala 44:88]
    reg txSlackCount : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txSlackCount) @[Counter.scala 62:40]
    node wrap_wrap_2 = eq(txSlackCount, UInt<2>("h3")) @[Counter.scala 74:24]
    node _wrap_value_T_4 = add(txSlackCount, UInt<2>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_5 = tail(_wrap_value_T_4, 1) @[Counter.scala 78:24]
    node _GEN_5 = mux(_T_7, _wrap_value_T_5, txSlackCount) @[Counter.scala 120:16 78:15 62:40]
    node txSlackWrap = and(_T_7, wrap_wrap_2) @[Counter.scala 120:{16,23}]
    node _T_8 = eq(UInt<2>("h0"), txState) @[UARTAdapter.scala 46:19]
    node _GEN_7 = mux(txSlackWrap, UInt<8>("h0"), txData) @[UARTAdapter.scala 48:25 49:17 39:19]
    node _GEN_8 = mux(txSlackWrap, UInt<2>("h1"), txState) @[UARTAdapter.scala 48:25 50:17 38:24]
    node _T_9 = eq(UInt<2>("h1"), txState) @[UARTAdapter.scala 46:19]
    node _GEN_9 = mux(txBaudWrap, UInt<2>("h2"), txState) @[UARTAdapter.scala 54:24 55:17 38:24]
    node _T_10 = eq(UInt<2>("h2"), txState) @[UARTAdapter.scala 46:19]
    node _txData_T = dshl(io_uart_txd, txDataIdx) @[UARTAdapter.scala 60:41]
    node _txData_T_1 = or(txData, _txData_T) @[UARTAdapter.scala 60:26]
    node _GEN_10 = mux(txfifo.io_enq_ready, _txData_T_1, txData) @[UARTAdapter.scala 59:34 60:16 39:19]
    node _txState_T_1 = mux(io_uart_txd, UInt<2>("h0"), UInt<2>("h3")) @[UARTAdapter.scala 63:23]
    node _GEN_11 = mux(txfifo.io_enq_ready, UInt<2>("h1"), txState) @[UARTAdapter.scala 64:39 65:17 38:24]
    node _GEN_12 = mux(txDataWrap, _txState_T_1, _GEN_11) @[UARTAdapter.scala 62:24 63:17]
    node _T_11 = eq(UInt<2>("h3"), txState) @[UARTAdapter.scala 46:19]
    node _T_13 = and(io_uart_txd, txfifo.io_enq_ready) @[UARTAdapter.scala 69:32]
    node _GEN_13 = mux(_T_13, UInt<2>("h0"), txState) @[UARTAdapter.scala 69:56 70:17 38:24]
    node _GEN_14 = mux(_T_11, _GEN_13, txState) @[UARTAdapter.scala 46:19 38:24]
    node _GEN_15 = mux(_T_10, _GEN_10, txData) @[UARTAdapter.scala 39:19 46:19]
    node _GEN_16 = mux(_T_10, _GEN_12, _GEN_14) @[UARTAdapter.scala 46:19]
    node _GEN_17 = mux(_T_9, _GEN_9, _GEN_16) @[UARTAdapter.scala 46:19]
    node _GEN_18 = mux(_T_9, txData, _GEN_15) @[UARTAdapter.scala 39:19 46:19]
    node _GEN_20 = mux(_T_8, _GEN_8, _GEN_17) @[UARTAdapter.scala 46:19]
    reg rxState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), rxState) @[UARTAdapter.scala 79:24]
    reg rxBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), rxBaudCount) @[Counter.scala 62:40]
    node wrap_wrap_3 = eq(rxBaudCount, UInt<10>("h363")) @[Counter.scala 74:24]
    node _wrap_value_T_6 = add(rxBaudCount, UInt<10>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_7 = tail(_wrap_value_T_6, 1) @[Counter.scala 78:24]
    node _GEN_21 = mux(wrap_wrap_3, UInt<10>("h0"), _wrap_value_T_7) @[Counter.scala 78:15 88:{20,28}]
    node _GEN_22 = mux(txfifo.io_enq_ready, _GEN_21, rxBaudCount) @[Counter.scala 120:16 62:40]
    node rxBaudWrap = and(txfifo.io_enq_ready, wrap_wrap_3) @[Counter.scala 120:{16,23}]
    node _T_14 = eq(rxState, UInt<2>("h2")) @[UARTAdapter.scala 83:49]
    node _T_15 = and(_T_14, txfifo.io_enq_ready) @[UARTAdapter.scala 83:61]
    node _T_16 = and(_T_15, rxBaudWrap) @[UARTAdapter.scala 83:84]
    reg rxDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), rxDataIdx) @[Counter.scala 62:40]
    node wrap_wrap_4 = eq(rxDataIdx, UInt<3>("h7")) @[Counter.scala 74:24]
    node _wrap_value_T_8 = add(rxDataIdx, UInt<3>("h1")) @[Counter.scala 78:24]
    node _wrap_value_T_9 = tail(_wrap_value_T_8, 1) @[Counter.scala 78:24]
    node _GEN_24 = mux(_T_16, _wrap_value_T_9, rxDataIdx) @[Counter.scala 120:16 78:15 62:40]
    node rxDataWrap = and(_T_16, wrap_wrap_4) @[Counter.scala 120:{16,23}]
    node _T_17 = eq(UInt<2>("h0"), rxState) @[UARTAdapter.scala 86:19]
    node _T_18 = and(rxBaudWrap, rxfifo.io_deq_valid) @[UARTAdapter.scala 89:24]
    node _GEN_26 = mux(_T_18, UInt<2>("h1"), rxState) @[UARTAdapter.scala 89:48 90:17 79:24]
    node _T_19 = eq(UInt<2>("h1"), rxState) @[UARTAdapter.scala 86:19]
    node _GEN_27 = mux(rxBaudWrap, UInt<2>("h2"), rxState) @[UARTAdapter.scala 95:24 96:17 79:24]
    node _T_20 = eq(UInt<2>("h2"), rxState) @[UARTAdapter.scala 86:19]
    node _io_uart_rxd_T = dshr(rxfifo.io_deq_bits, rxDataIdx) @[UARTAdapter.scala 100:42]
    node _io_uart_rxd_T_1 = bits(_io_uart_rxd_T, 0, 0) @[UARTAdapter.scala 100:55]
    node _T_21 = and(rxDataWrap, rxBaudWrap) @[UARTAdapter.scala 101:23]
    node _GEN_28 = mux(_T_21, UInt<2>("h0"), rxState) @[UARTAdapter.scala 101:38 102:17 79:24]
    node _GEN_29 = mux(_T_20, _io_uart_rxd_T_1, UInt<1>("h1")) @[UARTAdapter.scala 100:19 85:15 86:19]
    node _GEN_30 = mux(_T_20, _GEN_28, rxState) @[UARTAdapter.scala 86:19 79:24]
    node _GEN_31 = mux(_T_19, UInt<1>("h0"), _GEN_29) @[UARTAdapter.scala 86:19 94:19]
    node _GEN_32 = mux(_T_19, _GEN_27, _GEN_30) @[UARTAdapter.scala 86:19]
    node _GEN_34 = mux(_T_17, _GEN_26, _GEN_32) @[UARTAdapter.scala 86:19]
    node _rxfifo_io_deq_ready_T_1 = and(_T_14, rxDataWrap) @[UARTAdapter.scala 106:48]
    node _rxfifo_io_deq_ready_T_2 = and(_rxfifo_io_deq_ready_T_1, rxBaudWrap) @[UARTAdapter.scala 106:62]
    io_uart_rxd <= or(_T_17, _GEN_31) @[UARTAdapter.scala 86:19 88:19]
    txfifo.clock <= clock
    txfifo.reset <= reset
    txfifo.io_enq_valid <= and(_T_1, wrap_wrap) @[Counter.scala 120:{16,23}]
    txfifo.io_enq_bits <= txData @[UARTAdapter.scala 75:23]
    txfifo.io_deq_ready <= sim.serial_out_ready @[UARTAdapter.scala 115:23]
    rxfifo.clock <= clock
    rxfifo.reset <= reset
    rxfifo.io_enq_valid <= sim.serial_in_valid @[UARTAdapter.scala 118:23]
    rxfifo.io_enq_bits <= sim.serial_in_bits @[UARTAdapter.scala 117:22]
    rxfifo.io_deq_ready <= and(_rxfifo_io_deq_ready_T_2, txfifo.io_enq_ready) @[UARTAdapter.scala 106:76]
    txState <= mux(reset, UInt<2>("h0"), _GEN_20) @[UARTAdapter.scala 38:{24,24}]
    txData <= mux(_T_8, _GEN_7, _GEN_18) @[UARTAdapter.scala 46:19]
    txDataIdx <= mux(reset, UInt<3>("h0"), _GEN_0) @[Counter.scala 62:{40,40}]
    txBaudCount <= mux(reset, UInt<10>("h0"), _GEN_3) @[Counter.scala 62:{40,40}]
    txSlackCount <= mux(reset, UInt<2>("h0"), _GEN_5) @[Counter.scala 62:{40,40}]
    rxState <= mux(reset, UInt<2>("h0"), _GEN_34) @[UARTAdapter.scala 79:{24,24}]
    rxBaudCount <= mux(reset, UInt<10>("h0"), _GEN_22) @[Counter.scala 62:{40,40}]
    rxDataIdx <= mux(reset, UInt<3>("h0"), _GEN_24) @[Counter.scala 62:{40,40}]
    sim.clock <= clock @[UARTAdapter.scala 110:16]
    sim.reset <= reset @[UARTAdapter.scala 111:25]
    sim.serial_in_ready <= rxfifo.io_enq_ready @[UARTAdapter.scala 119:26]
    sim.serial_out_valid <= txfifo.io_deq_valid @[UARTAdapter.scala 114:27]
    sim.serial_out_bits <= txfifo.io_deq_bits @[UARTAdapter.scala 113:26]

  module TestHarness :
    input clock : Clock
    input reset : UInt<1>
    output io_success : UInt<1>

    inst chiptop of ChipTop @[TestHarness.scala 90:19]
    inst SimJTAG of SimJTAG @[HarnessBinders.scala 258:26]
    inst plusarg_reader of plusarg_reader_127 @[PlusArg.scala 80:11]
    inst bits_out_queue of AsyncQueue_inTestHarness @[SerialAdapter.scala 27:29]
    inst bits_in_queue of AsyncQueue_inTestHarness @[SerialAdapter.scala 33:28]
    inst ram of SerialRAM_inTestHarness @[SerialAdapter.scala 64:24]
    inst success_sim of SimSerial @[SerialAdapter.scala 101:23]
    inst plusarg_reader_1 of plusarg_reader_144 @[PlusArg.scala 80:11]
    inst simdram of SimDRAM @[HarnessBinders.scala 190:23]
    inst uart_sim_0 of UARTAdapter_inTestHarness @[UARTAdapter.scala 132:28]
    node dtm_success = eq(SimJTAG.exit, UInt<32>("h1")) @[Periphery.scala 230:26]
    node _T_2 = not(reset) @[HarnessBinders.scala 258:115]
    node _T_3 = geq(SimJTAG.exit, UInt<32>("h2")) @[Periphery.scala 231:19]
    node _GEN_2 = shr(SimJTAG.exit, 1) @[Periphery.scala 232:59]
    node _T_4 = pad(_GEN_2, 32) @[Periphery.scala 232:59]
    io_success <= or(success_sim.exit, dtm_success) @[HarnessBinders.scala 308:{24,37}]
    chiptop.jtag_TCK <= SimJTAG.jtag_TCK @[HarnessBinders.scala 252:29 Periphery.scala 217:15]
    chiptop.jtag_TMS <= SimJTAG.jtag_TMS @[HarnessBinders.scala 252:29 Periphery.scala 218:15]
    chiptop.jtag_TDI <= SimJTAG.jtag_TDI @[HarnessBinders.scala 252:29 Periphery.scala 219:15]
    chiptop.serial_tl_bits_in_valid <= bits_in_queue.io_deq_valid @[SerialAdapter.scala 34:20]
    chiptop.serial_tl_bits_in_bits <= bits_in_queue.io_deq_bits @[SerialAdapter.scala 34:20]
    chiptop.serial_tl_bits_out_ready <= bits_out_queue.io_enq_ready @[SerialAdapter.scala 28:24]
    chiptop.custom_boot <= plusarg_reader_1.out @[HarnessBinders.scala 329:21]
    chiptop.clock_clock <= clock @[TestHarness.scala 106:40 107:36]
    chiptop.reset <= asAsyncReset(reset) @[HarnessBinders.scala 342:51]
    chiptop.axi4_mem_0_bits_aw_ready <= simdram.axi_aw_ready @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_w_ready <= simdram.axi_w_ready @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_b_valid <= simdram.axi_b_valid @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_b_bits_id <= simdram.axi_b_bits_id @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_b_bits_resp <= simdram.axi_b_bits_resp @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_ar_ready <= simdram.axi_ar_ready @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_r_valid <= simdram.axi_r_valid @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_r_bits_id <= simdram.axi_r_bits_id @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_r_bits_data <= simdram.axi_r_bits_data @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_r_bits_resp <= simdram.axi_r_bits_resp @[HarnessBinders.scala 191:18]
    chiptop.axi4_mem_0_bits_r_bits_last <= simdram.axi_r_bits_last @[HarnessBinders.scala 191:18]
    chiptop.uart_0_rxd <= uart_sim_0.io_uart_rxd @[UARTAdapter.scala 135:18]
    SimJTAG.clock <= clock @[TestHarness.scala 106:40 107:36]
    SimJTAG.reset <= reset @[HarnessBinders.scala 258:107]
    SimJTAG.jtag_TDO_data <= chiptop.jtag_TDO @[HarnessBinders.scala 252:29 253:28]
    SimJTAG.jtag_TDO_driven <= UInt<1>("h1") @[HarnessBinders.scala 252:29 254:30]
    SimJTAG.enable <= bits(plusarg_reader.out, 0, 0) @[Periphery.scala 225:18]
    SimJTAG.init_done <= not(reset) @[HarnessBinders.scala 258:115]
    bits_out_queue.io_enq_clock <= chiptop.serial_tl_clock @[SerialAdapter.scala 29:30]
    bits_out_queue.io_enq_reset <= reset @[SerialAdapter.scala 30:39]
    bits_out_queue.io_enq_valid <= chiptop.serial_tl_bits_out_valid @[SerialAdapter.scala 28:24]
    bits_out_queue.io_enq_bits <= chiptop.serial_tl_bits_out_bits @[SerialAdapter.scala 28:24]
    bits_out_queue.io_deq_clock <= clock @[TestHarness.scala 106:40 107:36]
    bits_out_queue.io_deq_reset <= reset @[SerialAdapter.scala 32:39]
    bits_out_queue.io_deq_ready <= ram.io_ser_out_ready @[SerialAdapter.scala 39:25 65:19]
    bits_in_queue.io_enq_clock <= clock @[TestHarness.scala 106:40 107:36]
    bits_in_queue.io_enq_reset <= reset @[SerialAdapter.scala 38:38]
    bits_in_queue.io_enq_valid <= ram.io_ser_in_valid @[SerialAdapter.scala 39:25 65:19]
    bits_in_queue.io_enq_bits <= ram.io_ser_in_bits @[SerialAdapter.scala 39:25 65:19]
    bits_in_queue.io_deq_clock <= chiptop.serial_tl_clock @[SerialAdapter.scala 35:29]
    bits_in_queue.io_deq_reset <= reset @[SerialAdapter.scala 36:38]
    bits_in_queue.io_deq_ready <= chiptop.serial_tl_bits_in_ready @[SerialAdapter.scala 34:20]
    ram.clock <= clock @[TestHarness.scala 106:40 107:36]
    ram.reset <= reset @[TestHarness.scala 106:40 108:36]
    ram.io_ser_in_ready <= bits_in_queue.io_enq_ready @[SerialAdapter.scala 39:25 40:23]
    ram.io_ser_out_valid <= bits_out_queue.io_deq_valid @[SerialAdapter.scala 39:25 41:19]
    ram.io_ser_out_bits <= bits_out_queue.io_deq_bits @[SerialAdapter.scala 39:25 41:19]
    ram.io_tsi_ser_in_valid <= success_sim.serial_in_valid @[SerialAdapter.scala 104:21]
    ram.io_tsi_ser_in_bits <= success_sim.serial_in_bits @[SerialAdapter.scala 104:21]
    ram.io_tsi_ser_out_ready <= success_sim.serial_out_ready @[SerialAdapter.scala 104:21]
    success_sim.clock <= clock @[TestHarness.scala 106:40 107:36]
    success_sim.reset <= reset @[HarnessBinders.scala 307:112]
    success_sim.serial_in_ready <= ram.io_tsi_ser_in_ready @[SerialAdapter.scala 104:21]
    success_sim.serial_out_valid <= ram.io_tsi_ser_out_valid @[SerialAdapter.scala 104:21]
    success_sim.serial_out_bits <= ram.io_tsi_ser_out_bits @[SerialAdapter.scala 104:21]
    simdram.clock <= chiptop.axi4_mem_0_clock @[HarnessBinders.scala 210:20]
    simdram.reset <= chiptop.axi4_mem_0_reset @[HarnessBinders.scala 211:20]
    simdram.axi_aw_valid <= chiptop.axi4_mem_0_bits_aw_valid @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_id <= chiptop.axi4_mem_0_bits_aw_bits_id @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_addr <= chiptop.axi4_mem_0_bits_aw_bits_addr @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_len <= chiptop.axi4_mem_0_bits_aw_bits_len @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_size <= chiptop.axi4_mem_0_bits_aw_bits_size @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_burst <= chiptop.axi4_mem_0_bits_aw_bits_burst @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_lock <= chiptop.axi4_mem_0_bits_aw_bits_lock @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_cache <= chiptop.axi4_mem_0_bits_aw_bits_cache @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_prot <= chiptop.axi4_mem_0_bits_aw_bits_prot @[HarnessBinders.scala 191:18]
    simdram.axi_aw_bits_qos <= chiptop.axi4_mem_0_bits_aw_bits_qos @[HarnessBinders.scala 191:18]
    simdram.axi_w_valid <= chiptop.axi4_mem_0_bits_w_valid @[HarnessBinders.scala 191:18]
    simdram.axi_w_bits_data <= chiptop.axi4_mem_0_bits_w_bits_data @[HarnessBinders.scala 191:18]
    simdram.axi_w_bits_strb <= chiptop.axi4_mem_0_bits_w_bits_strb @[HarnessBinders.scala 191:18]
    simdram.axi_w_bits_last <= chiptop.axi4_mem_0_bits_w_bits_last @[HarnessBinders.scala 191:18]
    simdram.axi_b_ready <= chiptop.axi4_mem_0_bits_b_ready @[HarnessBinders.scala 191:18]
    simdram.axi_ar_valid <= chiptop.axi4_mem_0_bits_ar_valid @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_id <= chiptop.axi4_mem_0_bits_ar_bits_id @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_addr <= chiptop.axi4_mem_0_bits_ar_bits_addr @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_len <= chiptop.axi4_mem_0_bits_ar_bits_len @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_size <= chiptop.axi4_mem_0_bits_ar_bits_size @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_burst <= chiptop.axi4_mem_0_bits_ar_bits_burst @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_lock <= chiptop.axi4_mem_0_bits_ar_bits_lock @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_cache <= chiptop.axi4_mem_0_bits_ar_bits_cache @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_prot <= chiptop.axi4_mem_0_bits_ar_bits_prot @[HarnessBinders.scala 191:18]
    simdram.axi_ar_bits_qos <= chiptop.axi4_mem_0_bits_ar_bits_qos @[HarnessBinders.scala 191:18]
    simdram.axi_r_ready <= chiptop.axi4_mem_0_bits_r_ready @[HarnessBinders.scala 191:18]
    uart_sim_0.clock <= clock
    uart_sim_0.reset <= reset
    uart_sim_0.io_uart_txd <= chiptop.uart_0_txd @[UARTAdapter.scala 134:28]
    printf(clock, and(_T_3, _T_2), "*** FAILED *** (exit code = %d)\n", _T_4) : printf @[Periphery.scala 232:13]
    stop(clock, and(_T_3, _T_2), 1) : stop @[Periphery.scala 233:11]

  extmodule plusarg_reader :
    output out : UInt<32>
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule plusarg_reader_122 :
    output out : UInt<32>
    defname = plusarg_reader
    parameter FORMAT = "uart_tx=%d"
    parameter DEFAULT = 1
    parameter WIDTH = 32

  extmodule ClockDividerN :
    output clk_out : Clock
    input clk_in : Clock
    defname = ClockDividerN
    parameter DIV = 1

  extmodule EICG_wrapper :
    input in : Clock
    input test_en : UInt<1>
    input en : UInt<1>
    output out : Clock
    defname = EICG_wrapper

  extmodule GenericDigitalOutIOCell :
    output pad : UInt<1>
    input o : UInt<1>
    input oe : UInt<1>
    defname = GenericDigitalOutIOCell

  extmodule GenericDigitalInIOCell :
    input pad : UInt<1>
    output i : UInt<1>
    input ie : UInt<1>
    defname = GenericDigitalInIOCell

  extmodule cc_dir_ext :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<136>
    output RW0_rdata : UInt<136>
    input RW0_wmask : UInt<8>
    defname = cc_dir_ext

  extmodule cc_banks_0_ext :
    input RW0_addr : UInt<13>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    defname = cc_banks_0_ext

  extmodule tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<176>
    output RW0_rdata : UInt<176>
    input RW0_wmask : UInt<8>
    defname = tag_array_ext

  extmodule array_0_0_ext :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_mask : UInt<2>
    defname = array_0_0_ext

  extmodule tag_array_0_ext :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<160>
    output RW0_rdata : UInt<160>
    input RW0_wmask : UInt<8>
    defname = tag_array_0_ext

  extmodule dataArrayB0Way_0_ext :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    defname = dataArrayB0Way_0_ext

  extmodule hi_us_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
    defname = hi_us_ext

  extmodule table_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<44>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<44>
    input W0_mask : UInt<4>
    defname = table_ext

  extmodule hi_us_0_ext :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
    defname = hi_us_0_ext

  extmodule table_0_ext :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<48>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<48>
    input W0_mask : UInt<4>
    defname = table_0_ext

  extmodule table_1_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<52>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<52>
    input W0_mask : UInt<4>
    defname = table_1_ext

  extmodule meta_0_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<120>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<120>
    input W0_mask : UInt<4>
    defname = meta_0_ext

  extmodule btb_0_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<56>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<56>
    input W0_mask : UInt<4>
    defname = btb_0_ext

  extmodule ebtb_ext :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<40>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<40>
    defname = ebtb_ext

  extmodule data_ext :
    input R0_addr : UInt<11>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<8>
    input W0_addr : UInt<11>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<8>
    input W0_mask : UInt<4>
    defname = data_ext

  extmodule meta_ext :
    input R0_addr : UInt<6>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<240>
    input W0_addr : UInt<6>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<240>
    defname = meta_ext

  extmodule ghist_0_ext :
    input R0_addr : UInt<6>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<72>
    input W0_addr : UInt<6>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<72>
    defname = ghist_0_ext

  extmodule rob_debug_inst_mem_ext :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_mask : UInt<4>
    defname = rob_debug_inst_mem_ext

  extmodule l2_tlb_ram_ext :
    input RW0_addr : UInt<9>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<45>
    output RW0_rdata : UInt<45>
    defname = l2_tlb_ram_ext

  extmodule mem_ext :
    input RW0_addr : UInt<9>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_wmask : UInt<8>
    defname = mem_ext

  module mem_inTestHarness :
    input RW0_addr : UInt<9>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata_0 : UInt<8>
    input RW0_wdata_1 : UInt<8>
    input RW0_wdata_2 : UInt<8>
    input RW0_wdata_3 : UInt<8>
    input RW0_wdata_4 : UInt<8>
    input RW0_wdata_5 : UInt<8>
    input RW0_wdata_6 : UInt<8>
    input RW0_wdata_7 : UInt<8>
    output RW0_rdata_0 : UInt<8>
    output RW0_rdata_1 : UInt<8>
    output RW0_rdata_2 : UInt<8>
    output RW0_rdata_3 : UInt<8>
    output RW0_rdata_4 : UInt<8>
    output RW0_rdata_5 : UInt<8>
    output RW0_rdata_6 : UInt<8>
    output RW0_rdata_7 : UInt<8>
    input RW0_wmask_0 : UInt<1>
    input RW0_wmask_1 : UInt<1>
    input RW0_wmask_2 : UInt<1>
    input RW0_wmask_3 : UInt<1>
    input RW0_wmask_4 : UInt<1>
    input RW0_wmask_5 : UInt<1>
    input RW0_wmask_6 : UInt<1>
    input RW0_wmask_7 : UInt<1>

    inst mem_ext of mem_ext
    mem_ext.RW0_clk <= RW0_clk
    mem_ext.RW0_en <= RW0_en
    mem_ext.RW0_addr <= RW0_addr
    RW0_rdata_0 <= bits(mem_ext.RW0_rdata, 7, 0)
    RW0_rdata_1 <= bits(mem_ext.RW0_rdata, 15, 8)
    RW0_rdata_2 <= bits(mem_ext.RW0_rdata, 23, 16)
    RW0_rdata_3 <= bits(mem_ext.RW0_rdata, 31, 24)
    RW0_rdata_4 <= bits(mem_ext.RW0_rdata, 39, 32)
    RW0_rdata_5 <= bits(mem_ext.RW0_rdata, 47, 40)
    RW0_rdata_6 <= bits(mem_ext.RW0_rdata, 55, 48)
    RW0_rdata_7 <= bits(mem_ext.RW0_rdata, 63, 56)
    mem_ext.RW0_wmode <= RW0_wmode
    node _GEN_0 = cat(RW0_wdata_7, RW0_wdata_6)
    node _GEN_1 = cat(RW0_wdata_5, RW0_wdata_4)
    node _GEN_2 = cat(RW0_wdata_3, RW0_wdata_2)
    node _GEN_3 = cat(RW0_wdata_1, RW0_wdata_0)
    node _GEN_4 = cat(_GEN_0, _GEN_1)
    node _GEN_5 = cat(_GEN_2, _GEN_3)
    mem_ext.RW0_wdata <= cat(_GEN_4, _GEN_5)
    node _GEN_6 = cat(RW0_wmask_7, RW0_wmask_6)
    node _GEN_7 = cat(RW0_wmask_5, RW0_wmask_4)
    node _GEN_8 = cat(RW0_wmask_3, RW0_wmask_2)
    node _GEN_9 = cat(RW0_wmask_1, RW0_wmask_0)
    node _GEN_10 = cat(_GEN_6, _GEN_7)
    node _GEN_11 = cat(_GEN_8, _GEN_9)
    mem_ext.RW0_wmask <= cat(_GEN_10, _GEN_11)
