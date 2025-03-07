###
#### How to create new interfaces:
##### Step 1:
##### Every time a new leaf directory is created,
##### create a symlink to the above INC link, also naming it INC.
##### This is done to ensure that all includes are kept short
##### and readable for everyone.
###
##### Step 2:
##### When that is done, go to src/lnk and create a symlink to
##### the new leaf directory, naming it what you want the interface
##### to be called, only with capital letters and capital numbers. 
##### There is no limit to the number of characters, but less is more.
##### !!!CAUTION!!!
##### If you move things around, make sure to update the interfaces
###
#### Interface syntax:
```c++
#include "INC/[interface]/[file]"
```
###
#### INTERFACES:
#### Internal use only:
##### ANS     - Finance Analysis                - src/int/analysis
##### CLC     - Finance Calculator              - src/int/calc
##### SPT     - Bill Splitter                   - src/int/split
##### USR     - User logic                      - src/int/user
###
#### External sources and reusable libraries:
##### FILE    - File read/write library         - src/lib/file
##### OUT     - Outside dependencies            - src/lib/outside
###
#### Testing:
##### TST     - All testing logic               -src/tst
###
#### Build system:
##### BLD     - Target directory for binaries   - src/tst
