break sim_io_error
break sim_core_signal


define dump
set sim_debug_dump ()
end

document dump
Dump cpu and simulator registers for debugging the simulator.
Requires the simulator to provide function sim_debug_dump.
end
