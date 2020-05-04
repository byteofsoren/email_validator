# Email verifing algorithm written in C.
How to compile.

`
$ git clone https://github.com/byteofsoren/email_validator.git
`

`
$ cd email_validator
`

`
$ mkdir build
`

`
$ cd build
`

`
$ cmake ..
`

`
$ make
`

## How to use.

`
$ emailValidator test@test.com
`

If the return is 1 its a valid email.

## How to include in your own projects.
Just include he header file like this.

`
#include "../email_validator/emailValidator.h"
`

And then cal the function like this.

`
int res = isEmail("test@email.com");
`

