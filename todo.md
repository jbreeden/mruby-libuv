- Cleanup handles & reqs when a loop is closed.
- GC Canary Types
  + For regression tests, have a canary flag that can be set on req's & handles.
  + Use the flag to make sure GC is happening at the right times
  + Have the free functions in the boxing code printf or otherwise log when
    GC happens & is_canary is set.
  + Could also log the loop's "GC root" members
