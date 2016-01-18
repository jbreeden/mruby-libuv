- [ ] close on GC, use callback to free mem
  + if obj has been initialized on a loop & not yet closed
       close & set callback to free (should be idempotent... not sure if callback will hit twice)
   else free immediately
  + Should handles be re-init-able? 
- [X] unref all handles when closed
- [ ] request types (functions, thunks, GC, boxing, etc)

- [ ] FS tests
- [ ] TCP tests
- [ ] UDP tests
- [ ] 
