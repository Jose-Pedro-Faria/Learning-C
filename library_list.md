# C Library List

## aio.h
- aio_cancel - cancel an outstanding asynchronous I/O request
- aio_error - get error status of asynchronous I/O operation
- aio_fsync - asynchronous file synchronization
- aio_init - asynchronous I/O initialization
- aio_read - asynchronous read
- aio_return - get return status of asynchronous I/O operation
- aio_suspend - wait for asynchronous I/O operation or timeout
- aio_write - asynchronous write
- lio_listio - initiate a list of I/O requests

## arpa/inet.h
- byteorder - convert values between host and network byte order
- htonl - convert values between host and network byte order
- htons - convert values between host and network byte order
- inet_net_ntop - Internet network number conversion
- inet_net_pton - Internet network number conversion
- inet_ntop - convert IPv4 and IPv6 addresses from binary to text form
- inet_pton - convert IPv4 and IPv6 addresses from text to binary form
- ntohl - convert values between host and network byte order
- ntohs - convert values between host and network byte order

## assert.h
- assert - abort the program if assertion is false
- assert_perror - test errnum and abort

## complex.h
- cabs - absolute value of a complex number
- cabsf - absolute value of a complex number
- cabsl - absolute value of a complex number
- cacos - complex arc cosine
- cacosf - complex arc cosine
- cacosh - complex arc hyperbolic cosine
- cacoshf - complex arc hyperbolic cosine
- cacoshl - complex arc hyperbolic cosine
- cacosl - complex arc cosine
- carg - calculate the complex argument
- cargf - calculate the complex argument
- cargl - calculate the complex argument
- casin - complex arc sine
- casinf - complex arc sine
- casinh - complex arc sine hyperbolic
- casinhf - complex arc sine hyperbolic
- casinhl - complex arc sine hyperbolic
- casinl - complex arc sine
- catan - complex arc tangents
- catanf - complex arc tangents
- catanh - complex arc tangents hyperbolic
- catanhf - complex arc tangents hyperbolic
- catanhl - complex arc tangents hyperbolic
- catanl - complex arc tangents
- ccos - complex cosine function
- ccosf - complex cosine function
- ccosh - complex hyperbolic cosine
- ccoshf - complex hyperbolic cosine
- ccoshl - complex hyperbolic cosine
- ccosl - complex cosine function
- cexp - complex exponential function
- cexp2 - base-2 exponent of a complex number
- cexp2f - base-2 exponent of a complex number
- cexp2l - base-2 exponent of a complex number
- cexpf - complex exponential function
- cexpl - complex exponential function
- cimag - get imaginary part of a complex number
- cimagf - get imaginary part of a complex number
- cimagl - get imaginary part of a complex number
- clog - natural logarithm of a complex number
- clog10 - base-10 logarithm of a complex number
- clog10f - base-10 logarithm of a complex number
- clog10l - base-10 logarithm of a complex number
- clog2 - base-2 logarithm of a complex number
- clog2f - base-2 logarithm of a complex number
- clog2l - base-2 logarithm of a complex number
- clogf - natural logarithm of a complex number
- clogl - natural logarithm of a complex number
- complex - basics of complex mathematics
- conj - calculate the complex conjugate
- conjf - calculate the complex conjugate
- conjl - calculate the complex conjugate
- cpow - complex power function
- cpowf - complex power function
- cpowl - complex power function
- cproj - project into Riemann Sphere
- cprojf - project into Riemann Sphere
- cprojl - project into Riemann Sphere
- creal - get real part of a complex number
- crealf - get real part of a complex number
- creall - get real part of a complex number
- csin - complex sine function
- csinf - complex sine function
- csinh - complex hyperbolic sine
- csinhf - complex hyperbolic sine
- csinhl - complex hyperbolic sine
- csinl - complex sine function
- csqrt - complex square root
- csqrtf - complex square root
- csqrtl - complex square root
- ctan - complex tangent function
- ctanf - complex tangent function
- ctanh - complex hyperbolic tangent
- ctanhf - complex hyperbolic tangent
- ctanhl - complex hyperbolic tangent
- ctanl - complex tangent function

## cs50.h
- get_char - prompts user for a line of text from stdin and returns the equivalent char
- get_double - prompts user for a line of text from stdin and returns the equivalent double
- get_float - prompts user for a line of text from stdin and returns the equivalent float
- get_int - prompts user for a line of text from stdin and returns the equivalent int
- get_long - prompts user for a line of text from stdin and returns the equivalent long
- get_long_long - prompts user for a line of text from stdin and returns the equivalent long long
- get_string - prompts user for a line of text from stdin and returns it as a string

## ctype.h
- isalnum - character classification functions
- isalnum_l - character classification functions
- isalpha - character classification functions
- isalpha_l - character classification functions
- isascii - character classification functions
- isascii_l - character classification functions
- isblank - character classification functions
- isblank_l - character classification functions
- iscntrl - character classification functions
- iscntrl_l - character classification functions
- isdigit - character classification functions
- isdigit_l - character classification functions
- isgraph - character classification functions
- isgraph_l - character classification functions
- islower - character classification functions
- islower_l - character classification functions
- isprint - character classification functions
- isprint_l - character classification functions
- ispunct - character classification functions
- ispunct_l - character classification functions
- isspace - character classification functions
- isspace_l - character classification functions
- isupper - character classification functions
- isupper_l - character classification functions
- isxdigit - character classification functions
- isxdigit_l - character classification functions
- toascii - convert character to ASCII
- tolower - convert uppercase or lowercase
- tolower_l - convert uppercase or lowercase
- toupper - convert uppercase or lowercase
- toupper_l - convert uppercase or lowercase

## dirent.h
- alphasort - scan a directory for matching entries
- getdirentries - get directory entries in a filesystem-independent format
- readdir - read a directory
- readdir_r - read a directory
- scandir - scan a directory for matching entries
- scandirat - scan a directory for matching entries
- seekdir - set the position of the next readdir() call in the directory stream.
- telldir - return current location in directory stream
- versionsort - scan a directory for matching entries

## dlfcn.h
- dladdr - translate address to symbolic information
- dladdr1 - translate address to symbolic information
- dlclose - open and close a shared object
- dlerror - obtain error diagnostic for functions in the dlopen API
- dlmopen - open and close a shared object
- dlopen - open and close a shared object
- dlsym - obtain address of a symbol in a shared object or executable
- dlvsym - obtain address of a symbol in a shared object or executable

## errno.h
- errno - number of last error
- program_invocation_name - obtain name used to invoke calling program
- program_invocation_short_name - obtain name used to invoke calling program

## fcntl.h
- arm_fadvise - predeclare an access pattern for file data
- arm_fadvise64_64 - predeclare an access pattern for file data
- arm_sync_file_range - sync a file segment with disk
- fadvise64 - predeclare an access pattern for file data
- fadvise64_64 - predeclare an access pattern for file data
- fallocate - manipulate file space
- fanotify_init - create and initialize fanotify group
- futimens - change file timestamps with nanosecond precision
- futimesat - change timestamps of a file relative to a directory file descriptor
- posix_fadvise - predeclare an access pattern for file data
- posix_fallocate - allocate file space
- readahead - initiate file readahead into page cache
- splice - splice data to/from a pipe
- sync_file_range - sync a file segment with disk
- sync_file_range2 - sync a file segment with disk
- tee - duplicating pipe content
- utimensat - change file timestamps with nanosecond precision
- vmsplice - splice user pages into a pipe

## fenv.h
- feclearexcept - floating-point rounding and exception handling
- fedisableexcept - floating-point rounding and exception handling
- feenableexcept - floating-point rounding and exception handling
- fegetenv - floating-point rounding and exception handling
- fegetexcept - floating-point rounding and exception handling
- fegetexceptflag - floating-point rounding and exception handling
- fegetround - floating-point rounding and exception handling
- feholdexcept - floating-point rounding and exception handling
- fenv - floating-point rounding and exception handling
- feraiseexcept - floating-point rounding and exception handling
- fesetenv - floating-point rounding and exception handling
- fesetexceptflag - floating-point rounding and exception handling
- fesetround - floating-point rounding and exception handling
- fetestexcept - floating-point rounding and exception handling
- feupdateenv - floating-point rounding and exception handling

## fmtmsg.h
- addseverity - introduce new severity classes
- fmtmsg - print formatted error messages

## fnmatch.h
- fnmatch - match filename or pathname

## ftw.h
- ftw - file tree walk
- nftw - file tree walk

## glob.h
- glob - find pathnames matching a pattern, free memory from glob()
- globfree - find pathnames matching a pattern, free memory from glob()

## grp.h
- fgetgrent_r - get group file entry reentrantly
- getgrent_r - get group file entry reentrantly
- getgrouplist - get list of groups to which a user belongs
- putgrent - write a group database entry to a file

## iconv.h
- iconv - perform character set conversion
- iconv_close - deallocate descriptor for character set conversion
- iconv_open - allocate descriptor for character set conversion

## inttypes.h
- strtoimax - convert string to integer
- strtoumax - convert string to integer

## langinfo.h
- nl_langinfo - query language and locale information
- nl_langinfo_l - query language and locale information

## libgen.h
- basename - parse pathname components
- dirname - parse pathname components

## limits.h
- MB_LEN_MAX - maximum multibyte length of a character across all locales
- realpath - return the canonicalized absolute pathname

## locale.h
- duplocale - duplicate a locale object
- freelocale - create, modify, and free a locale object
- locale - description of multilanguage support
- localeconv - get numeric formatting information
- newlocale - create, modify, and free a locale object
- setlocale - set the current locale
- uselocale - set/get the locale for the calling thread

## math.h
- acos - arc cosine function
- acosf - arc cosine function
- acosh - inverse hyperbolic cosine function
- acoshf - inverse hyperbolic cosine function
- acoshl - inverse hyperbolic cosine function
- acosl - arc cosine function
- asin - arc sine function
- asinf - arc sine function
- asinh - inverse hyperbolic sine function
- asinhf - inverse hyperbolic sine function
- asinhl - inverse hyperbolic sine function
- asinl - arc sine function
- atan - arc tangent function
- atan2 - arc tangent function of two variables
- atan2f - arc tangent function of two variables
- atan2l - arc tangent function of two variables
- atanf - arc tangent function
- atanh - inverse hyperbolic tangent function
- atanhf - inverse hyperbolic tangent function
- atanhl - inverse hyperbolic tangent function
- atanl - arc tangent function
- cbrt - cube root function
- cbrtf - cube root function
- cbrtl - cube root function
- ceil - ceiling function: smallest integral value not less than argument
- ceilf - ceiling function: smallest integral value not less than argument
- ceill - ceiling function: smallest integral value not less than argument
- copysign - copy sign of a number
- copysignf - copy sign of a number
- copysignl - copy sign of a number
- cos - cosine function
- cosf - cosine function
- cosh - hyperbolic cosine function
- coshf - hyperbolic cosine function
- coshl - hyperbolic cosine function
- cosl - cosine function
- drem - floating-point remainder function
- dremf - floating-point remainder function
- dreml - floating-point remainder function
- erf - error function
- erfc - complementary error function
- erfcf - complementary error function
- erfcl - complementary error function
- erff - error function
- erfl - error function
- exp - base-e exponential function
- exp10 - base-10 exponential function
- exp10f - base-10 exponential function
- exp10l - base-10 exponential function
- exp2 - base-2 exponential function
- exp2f - base-2 exponential function
- exp2l - base-2 exponential function
- expf - base-e exponential function
- expl - base-e exponential function
- expm1 - exponential minus 1
- expm1f - exponential minus 1
- expm1l - exponential minus 1
- fabs - absolute value of floating-point number
- fabsf - absolute value of floating-point number
- fabsl - absolute value of floating-point number
- fdim - positive difference
- fdimf - positive difference
- fdiml - positive difference
- finite - BSD floating-point classification functions
- finitef - BSD floating-point classification functions
- finitel - BSD floating-point classification functions
- floor - largest integral value not greater than argument
- floorf - largest integral value not greater than argument
- floorl - largest integral value not greater than argument
- fma - floating-point multiply and add
- fmaf - floating-point multiply and add
- fmal - floating-point multiply and add
- fmax - determine maximum of two floating-point numbers
- fmaxf - determine maximum of two floating-point numbers
- fmaxl - determine maximum of two floating-point numbers
- fmin - determine minimum of two floating-point numbers
- fminf - determine minimum of two floating-point numbers
- fminl - determine minimum of two floating-point numbers
- fmod - floating-point remainder function
- fmodf - floating-point remainder function
- fmodl - floating-point remainder function
- fpclassify - floating-point classification macros
- frexp - convert floating-point number to fractional and integral components
- frexpf - convert floating-point number to fractional and integral components
- frexpl - convert floating-point number to fractional and integral components
- gamma - (logarithm of the) gamma function
- gammaf - (logarithm of the) gamma function
- gammal - (logarithm of the) gamma function
- HUGE_VAL - floating-point constants
- HUGE_VALF - floating-point constants
- HUGE_VALL - floating-point constants
- hypot - Euclidean distance function
- hypotf - Euclidean distance function
- hypotl - Euclidean distance function
- ilogb - get integer exponent of a floating-point value
- ilogbf - get integer exponent of a floating-point value
- ilogbl - get integer exponent of a floating-point value
- INFINITY - floating-point constants
- isfinite - floating-point classification macros
- isgreater - floating-point relational tests without exception for NaN
- isgreaterequal - floating-point relational tests without exception for NaN
- isinf - floating-point classification macros
- isinff - BSD floating-point classification functions
- isinfl - BSD floating-point classification functions
- isless - floating-point relational tests without exception for NaN
- islessequal - floating-point relational tests without exception for NaN
- islessgreater - floating-point relational tests without exception for NaN
- isnan - floating-point classification macros
- isnanf - BSD floating-point classification functions
- isnanl - BSD floating-point classification functions
- isnormal - floating-point classification macros
- isunordered - floating-point relational tests without exception for NaN
- j0 - Bessel functions of the first kind
- j0f - Bessel functions of the first kind
- j0l - Bessel functions of the first kind
- j1 - Bessel functions of the first kind
- j1f - Bessel functions of the first kind
- j1l - Bessel functions of the first kind
- jn - Bessel functions of the first kind
- jnf - Bessel functions of the first kind
- jnl - Bessel functions of the first kind
- ldexp - multiply floating-point number by integral power of 2
- ldexpf - multiply floating-point number by integral power of 2
- ldexpl - multiply floating-point number by integral power of 2
- lgamma - log gamma function
- lgamma_r - log gamma function
- lgammaf - log gamma function
- lgammaf_r - log gamma function
- lgammal - log gamma function
- lgammal_r - log gamma function
- llrint - round to nearest integer
- llrintf - round to nearest integer
- llrintl - round to nearest integer
- llround - round to nearest integer
- llroundf - round to nearest integer
- llroundl - round to nearest integer
- log - natural logarithmic function
- log10 - base-10 logarithmic function
- log10f - base-10 logarithmic function
- log10l - base-10 logarithmic function
- log1p - logarithm of 1 plus argument
- log1pf - logarithm of 1 plus argument
- log1pl - logarithm of 1 plus argument
- log2 - base-2 logarithmic function
- log2f - base-2 logarithmic function
- log2l - base-2 logarithmic function
- logb - get exponent of a floating-point value
- logbf - get exponent of a floating-point value
- logbl - get exponent of a floating-point value
- logf - natural logarithmic function
- logl - natural logarithmic function
- lrint - round to nearest integer
- lrintf - round to nearest integer
- lrintl - round to nearest integer
- lround - round to nearest integer
- lroundf - round to nearest integer
- lroundl - round to nearest integer
- math_error - detecting errors from mathematical functions
- matherr - SVID math library exception handling
- modf - extract signed integral and fractional values from floating-point number
- modff - extract signed integral and fractional values from floating-point number
- modfl - extract signed integral and fractional values from floating-point number
- nan - return 'Not a Number'
- nanf - return 'Not a Number'
- nanl - return 'Not a Number'
- nearbyint - round to nearest integer
- nearbyintf - round to nearest integer
- nearbyintl - round to nearest integer
- nextafter - floating-point number manipulation
- nextafterf - floating-point number manipulation
- nextafterl - floating-point number manipulation
- nextdown - return next floating-point number toward positive/negative infinity
- nextdownf - return next floating-point number toward positive/negative infinity
- nextdownl - return next floating-point number toward positive/negative infinity
- nexttoward - floating-point number manipulation
- nexttowardf - floating-point number manipulation
- nexttowardl - floating-point number manipulation
- nextup - return next floating-point number toward positive/negative infinity
- nextupf - return next floating-point number toward positive/negative infinity
- nextupl - return next floating-point number toward positive/negative infinity
- pow - power functions
- pow10 - base-10 power functions
- pow10f - base-10 power functions
- pow10l - base-10 power functions
- powf - power functions
- powl - power functions
- remainder - floating-point remainder function
- remainderf - floating-point remainder function
- remainderl - floating-point remainder function
- remquo - remainder and part of quotient
- remquof - remainder and part of quotient
- remquol - remainder and part of quotient
- rint - round to nearest integer
- rintf - round to nearest integer
- rintl - round to nearest integer
- round - round to nearest integer, away from zero
- roundf - round to nearest integer, away from zero
- roundl - round to nearest integer, away from zero
- scalb - multiply floating-point number by integral power of radix (OBSOLETE)
- scalbf - multiply floating-point number by integral power of radix (OBSOLETE)
- scalbl - multiply floating-point number by integral power of radix (OBSOLETE)
- scalbln - multiply floating-point number by integral power of radix
- scalblnf - multiply floating-point number by integral power of radix
- scalblnl - multiply floating-point number by integral power of radix
- scalbn - multiply floating-point number by integral power of radix
- scalbnf - multiply floating-point number by integral power of radix
- scalbnl - multiply floating-point number by integral power of radix
- signbit - test sign of a real floating-point number
- signgam - log gamma function
- significand - get mantissa of floating-point number
- significandf - get mantissa of floating-point number
- significandl - get mantissa of floating-point number
- sin - sine function
- sincos - calculate sin and cos simultaneously
- sincosf - calculate sin and cos simultaneously
- sincosl - calculate sin and cos simultaneously
- sinf - sine function
- sinh - hyperbolic sine function
- sinhf - hyperbolic sine function
- sinhl - hyperbolic sine function
- sinl - sine function
- sqrt - square root function
- sqrtf - square root function
- sqrtl - square root function
- tan - tangent function
- tanf - tangent function
- tanh - hyperbolic tangent function
- tanhf - hyperbolic tangent function
- tanhl - hyperbolic tangent function
- tanl - tangent function
- tgamma - true gamma function
- tgammaf - true gamma function
- tgammal - true gamma function
- trunc - round to integer, toward zero
- truncf - round to integer, toward zero
- truncl - round to integer, toward zero
- y0 - Bessel functions of the second kind
- y0f - Bessel functions of the second kind
- y0l - Bessel functions of the second kind
- y1 - Bessel functions of the second kind
- y1f - Bessel functions of the second kind
- y1l - Bessel functions of the second kind
- yn - Bessel functions of the second kind
- ynf - Bessel functions of the second kind
- ynl - Bessel functions of the second kind

## monetary.h
- strfmon - convert monetary value to a string
- strfmon_l - convert monetary value to a string

## mqueue.h
- mq_close - close a message queue descriptor
- mq_getattr - get/set message queue attributes
- mq_notify - register for notification when a message is available
- mq_notify - register for notification when a message is available
- mq_open - open a message queue
- mq_open - open a message queue
- mq_receive - receive a message from a message queue
- mq_send - send a message to a message queue
- mq_setattr - get/set message queue attributes
- mq_timedreceive - receive a message from a message queue
- mq_timedreceive - receive a message from a message queue
- mq_timedsend - send a message to a message queue
- mq_timedsend - send a message to a message queue
- mq_unlink - remove a message queue
- mq_unlink - remove a message queue

## net/if.h
- if_freenameindex - get network interface names and indexes
- if_indextoname - mappings between network interface names and indexes
- if_nameindex - get network interface names and indexes
- if_nametoindex - mappings between network interface names and indexes
## netdb.h
- endhostent - get network host entry
- endnetent - get network entry
- endnetgrent - handle network group entries
- endprotoent - get protocol entry
- endrpcent - get RPC entry
- endservent - get service entry
- gai_cancel - asynchronous network address and service translation
- gai_error - asynchronous network address and service translation
- gai_suspend - asynchronous network address and service translation
- getaddrinfo_a - asynchronous network address and service translation
- gethostbyaddr - get network host entry
- gethostbyaddr_r - get network host entry
- gethostbyname - get network host entry
- gethostbyname2 - get network host entry
- gethostbyname2_r - get network host entry
- gethostbyname_r - get network host entry
- gethostent - get network host entry
- gethostent_r - get network host entry
- getnetbyaddr - get network entry
- getnetbyaddr_r - get network entry (reentrant)
- getnetbyname - get network entry
- getnetbyname_r - get network entry (reentrant)
- getnetent - get network entry
- getnetent_r - get network entry (reentrant)
- getnetgrent - handle network group entries
- getnetgrent_r - handle network group entries
- getprotobyname - get protocol entry
- getprotobyname_r - get protocol entry (reentrant)
- getprotobynumber - get protocol entry
- getprotobynumber_r - get protocol entry (reentrant)
- getprotoent - get protocol entry
- getprotoent_r - get protocol entry (reentrant)
- getrpcbyname - get RPC entry
- getrpcbyname_r - get RPC entry (reentrant)
- getrpcbynumber - get RPC entry
- getrpcbynumber_r - get RPC entry (reentrant)
- getrpcent - get RPC entry
- getrpcent_r - get RPC entry (reentrant)
- getservbyname - get service entry
- getservbyname_r - get service entry (reentrant)
- getservbyport - get service entry
- getservbyport_r - get service entry (reentrant)
- getservent - get service entry
- getservent_r - get service entry (reentrant)
- h_errno - get network host entry
- herror - get network host entry
- hstrerror - get network host entry
- innetgr - handle network group entries
- iruserok - routines for returning a stream to a remote command
- iruserok_af - routines for returning a stream to a remote command
- rcmd - routines for returning a stream to a remote command
- rcmd_af - routines for returning a stream to a remote command
- rexec - return stream to a remote command
- rexec_af - return stream to a remote command
- rresvport - routines for returning a stream to a remote command
- rresvport_af - routines for returning a stream to a remote command
- ruserok - routines for returning a stream to a remote command
- ruserok_af - routines for returning a stream to a remote command
- sethostent - get network host entry
- setnetent - get network entry
- setnetgrent - handle network group entries
- setprotoent - get protocol entry
- setrpcent - get RPC entry
- setservent - get service entry

## netinet/in.h
- dn_comp - resolver routines
- dn_expand - resolver routines
- res_init - resolver routines
- res_mkquery - resolver routines
- res_ninit - resolver routines
- res_nmkquery - resolver routines
- res_nquery - resolver routines
- res_nquerydomain - resolver routines
- res_nsearch - resolver routines
- res_nsend - resolver routines
- res_query - resolver routines
- res_querydomain - resolver routines
- res_search - resolver routines
- res_send - resolver routines
- resolver - resolver routines

## nl_types.h
- catclose - open/close a message catalog
- catgets - get message from a message catalog
- catopen - open/close a message catalog

## poll.h
- poll - wait for some event on a file descriptor
- ppoll - wait for some event on a file descriptor

## pthread.h
- pthread_attr_destroy - initialize and destroy thread attributes object
- pthread_attr_getaffinity_np - set/get CPU affinity attribute in thread attributes object
- pthread_attr_getdetachstate - set/get detach state attribute in thread attributes object
- pthread_attr_getguardsize - set/get guard size attribute in thread attributes object
- pthread_attr_getinheritsched - set/get inherit-scheduler attribute in thread attributes object
- pthread_attr_getschedparam - set/get scheduling parameter attributes in thread attributes object
- pthread_attr_getschedpolicy - set/get scheduling policy attribute in thread attributes object
- pthread_attr_getscope - set/get contention scope attribute in thread attributes object
- pthread_attr_getstack - set/get stack attributes in thread attributes object
- pthread_attr_getstackaddr - set/get stack address attribute in thread attributes object
- pthread_attr_getstacksize - set/get stack size attribute in thread attributes object
- pthread_attr_init - initialize and destroy thread attributes object
- pthread_attr_setaffinity_np - set/get CPU affinity attribute in thread attributes object
- pthread_attr_setdetachstate - set/get detach state attribute in thread attributes object
- pthread_attr_setguardsize - set/get guard size attribute in thread attributes object
- pthread_attr_setinheritsched - set/get inherit-scheduler attribute in thread attributes object
- pthread_attr_setschedparam - set/get scheduling parameter attributes in thread attributes object
- pthread_attr_setschedpolicy - set/get scheduling policy attribute in thread attributes object
- pthread_attr_setscope - set/get contention scope attribute in thread attributes object
- pthread_attr_setstack - set/get stack attributes in thread attributes object
- pthread_attr_setstackaddr - set/get stack address attribute in thread attributes object
- pthread_attr_setstacksize - set/get stack size attribute in thread attributes object
- pthread_cancel - send a cancellation request to a thread
- pthread_cleanup_pop - push and pop thread cancellation clean-up handlers
- pthread_cleanup_pop_restore_np - push and pop thread cancellation clean-up handlers while saving cancelability type
- pthread_cleanup_push - push and pop thread cancellation clean-up handlers
- pthread_cleanup_push_defer_np - push and pop thread cancellation clean-up handlers while saving cancelability type
- pthread_create - create a new thread
- pthread_detach - detach a thread
- pthread_equal - compare thread IDs
- pthread_exit - terminate calling thread
- pthread_getaffinity_np - set/get CPU affinity of a thread
- pthread_getattr_default_np - get or set default thread-creation attributes
- pthread_getattr_np - get attributes of created thread
- pthread_getconcurrency - set/get the concurrency level
- pthread_getcpuclockid - retrieve ID of a thread's CPU time clock
- pthread_getname_np - set/get the name of a thread
- pthread_getschedparam - set/get scheduling policy and parameters of a thread
- pthread_join - join with a terminated thread
- pthread_kill_other_threads_np - terminate all other threads in process
- pthread_mutex_consistent - make a robust mutex consistent
- pthread_mutex_consistent_np - make a robust mutex consistent
- pthread_mutexattr_getpshared - get/set process-shared mutex attribute
- pthread_mutexattr_getrobust - get and set the robustness attribute of a mutex attributes object
- pthread_mutexattr_getrobust_np - get and set the robustness attribute of a mutex attributes object
- pthread_mutexattr_setpshared - get/set process-shared mutex attribute
- pthread_mutexattr_setrobust - get and set the robustness attribute of a mutex attributes object
- pthread_mutexattr_setrobust_np - get and set the robustness attribute of a mutex attributes object
- pthread_rwlockattr_getkind_np - set/get the read-write lock kind of the thread read-write lock attribute object
- pthread_rwlockattr_setkind_np - set/get the read-write lock kind of the thread read-write lock attribute object
- pthread_self - obtain ID of the calling thread
- pthread_setaffinity_np - set/get CPU affinity of a thread
- pthread_setattr_default_np - get or set default thread-creation attributes
- pthread_setcancelstate - set cancelability state and type
- pthread_setcanceltype - set cancelability state and type
- pthread_setconcurrency - set/get the concurrency level
- pthread_setname_np - set/get the name of a thread
- pthread_setschedparam - set/get scheduling policy and parameters of a thread
- pthread_setschedprio - set scheduling priority of a thread
- pthread_spin_destroy - initialize or destroy a spin lock
- pthread_spin_init - initialize or destroy a spin lock
- pthread_spin_lock - lock and unlock a spin lock
- pthread_spin_trylock - lock and unlock a spin lock
- pthread_spin_unlock - lock and unlock a spin lock
- pthread_testcancel - request delivery of any pending cancellation request
- pthread_timedjoin_np - try to join with a terminated thread
- pthread_tryjoin_np - try to join with a terminated thread
- pthread_yield - yield the processor

## pwd.h
- fgetpwent_r - get passwd file entry reentrantly
- getpwent_r - get passwd file entry reentrantly

## sched.h
- __clone2 - create a child process
- clone - create a child process
- clone2 - create a child process
- CPU_ALLOC - macros for manipulating CPU sets
- CPU_ALLOC_SIZE - macros for manipulating CPU sets
- CPU_AND - macros for manipulating CPU sets
- CPU_AND_S - macros for manipulating CPU sets
- CPU_CLR - macros for manipulating CPU sets
- CPU_CLR_S - macros for manipulating CPU sets
- CPU_COUNT - macros for manipulating CPU sets
- CPU_COUNT_S - macros for manipulating CPU sets
- CPU_EQUAL - macros for manipulating CPU sets
- CPU_EQUAL_S - macros for manipulating CPU sets
- CPU_FREE - macros for manipulating CPU sets
- CPU_ISSET - macros for manipulating CPU sets
- CPU_ISSET_S - macros for manipulating CPU sets
- CPU_OR - macros for manipulating CPU sets
- CPU_OR_S - macros for manipulating CPU sets
- CPU_SET - macros for manipulating CPU sets
- CPU_SET_S - macros for manipulating CPU sets
- CPU_XOR - macros for manipulating CPU sets
- CPU_XOR_S - macros for manipulating CPU sets
- CPU_ZERO - macros for manipulating CPU sets
- CPU_ZERO_S - macros for manipulating CPU sets
- sched_get_priority_max - get static priority range
- sched_get_priority_min - get static priority range
- sched_getaffinity - set and get a thread's CPU affinity mask
- sched_getattr - set and get scheduling policy and attributes
- sched_getcpu - determine CPU on which the calling thread is running
- sched_getparam - set and get scheduling parameters
- sched_getscheduler - set and get scheduling policy/parameters
- sched_rr_get_interval - get the SCHED_RR interval for the named process
- sched_setaffinity - set and get a thread's CPU affinity mask
- sched_setattr - set and get scheduling policy and attributes
- sched_setparam - set and get scheduling parameters
- sched_setscheduler - set and get scheduling policy/parameters
- sched_yield - yield the processor
- setns - reassociate thread with a namespace
- unshare - disassociate parts of the process execution context

## search.h
- hcreate - hash table management
- hcreate_r - hash table management
- hdestroy - hash table management
- hdestroy_r - hash table management
- hsearch - hash table management
- hsearch_r - hash table management
- insque - insert/remove an item from a queue
- lfind - linear search of an array
- lsearch - linear search of an array
- remque - insert/remove an item from a queue
- tdelete - manage a binary tree
- tdestroy - manage a binary tree
- tfind - manage a binary tree
- tsearch - manage a binary tree
- twalk - manage a binary tree

## semaphore.h
- sem_close - close a named semaphore
- sem_destroy - destroy an unnamed semaphore
- sem_getvalue - get the value of a semaphore
- sem_init - initialize an unnamed semaphore
- sem_open - initialize and open a named semaphore
- sem_post - unlock a semaphore
- sem_timedwait - lock a semaphore
- sem_trywait - lock a semaphore
- sem_unlink - remove a named semaphore
- sem_wait - lock a semaphore

## setjmp.h
- longjmp - performing a nonlocal goto
- setjmp - performing a nonlocal goto
- siglongjmp - performing a nonlocal goto
- sigsetjmp - performing a nonlocal goto

## signal.h
- bsd_signal - signal handling with BSD semantics
- gsignal - software signal facility
- killpg - send signal to a process group
- killpg - send signal to a process group
- psiginfo - print signal message
- psignal - print signal message
- pthread_kill - send a signal to a thread
- pthread_sigmask - examine and change mask of blocked signals
- pthread_sigqueue - queue a signal and data to a thread
- raise - send a signal to the caller
- rt_sigaction - examine and change a signal action
- rt_sigpending - examine pending signals
- rt_sigprocmask - examine and change blocked signals
- rt_sigsuspend - wait for a signal
- rt_sigtimedwait - synchronously wait for queued signals
- sigaction - examine and change a signal action
- sigaddset - POSIX signal set operations
- sigaltstack - set and/or get signal stack context
- sigandset - POSIX signal set operations
- sigblock - BSD signal API
- sigdelset - POSIX signal set operations
- sigemptyset - POSIX signal set operations
- sigfillset - POSIX signal set operations
- siggetmask - BSD signal API
- sighold - System V signal API
- sigignore - System V signal API
- siginterrupt - allow signals to interrupt system calls
- sigisemptyset - POSIX signal set operations
- sigismember - POSIX signal set operations
- sigmask - BSD signal API
- signal - ANSI C signal handling
- sigorset - POSIX signal set operations
- sigpause - atomically release blocked signals and wait for interrupt
- sigpending - examine pending signals
- sigprocmask - examine and change blocked signals
- sigqueue - queue a signal and data to a process
- sigqueue - queue a signal and data to a process
- sigrelse - System V signal API
- sigset - System V signal API
- sigsetmask - BSD signal API
- sigsetops - POSIX signal set operations
- sigstack - set and/or get signal stack context
- sigsuspend - wait for a signal
- sigtimedwait - synchronously wait for queued signals
- sigvec - BSD signal API
- sigwait - wait for a signal
- sigwaitinfo - synchronously wait for queued signals
- ssignal - software signal facility
- sysv_signal - signal handling with System V semantics
- timer_create - create a POSIX per-process timer

## spawn.h
- posix_spawn - spawn a process
- posix_spawnp - spawn a process

## stdarg.h
- stdarg - variable argument lists
- va_arg - variable argument lists
- va_copy - variable argument lists
- va_end - variable argument lists
- va_start - variable argument lists

## stddef.h
- offsetof - offset of a structure member
- wcstoimax - convert wide-character string to integer
- wcstoumax - convert wide-character string to integer
