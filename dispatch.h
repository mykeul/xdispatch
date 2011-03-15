/*
* Copyright (c) 2008-2009 Apple Inc. All rights reserved.
* Copyright (c) 2011 MLBA. All rights reserved.
*
* @MLBA_OPEN_LICENSE_HEADER_START@
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*     http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* @MLBA_OPEN_LICENSE_HEADER_END@
*/


#ifndef XDISPATCH_H_
#define XDISPATCH_H_

#include "bc/blocks.h"

#ifdef __BLOCKS__
#   include <dispatch/dispatch.h>
#	define NSEC_PER_MSEC 1000000ll
#else
#	ifdef HAVE_NATIVE_DISPATCH_H
#		include <dispatch/dispatch.h>
#       include "dispatch_blocks.h"

#		define NSEC_PER_MSEC 1000000ll

/*#	elif defined(_GNUC__)
#		warning "Working on support for this platform, but not completed yet"
#	else
#		pragma message("Working on support for this platform, but not completed yet")
*/
#	endif

#   if defined(__cplusplus)
#       define __DISPATCH_BEGIN_DECLS	extern "C" {
#       define __DISPATCH_END_DECLS	}
#   else
#       define __DISPATCH_BEGIN_DECLS
#       define __DISPATCH_END_DECLS
#   endif

#   include <stddef.h>
#   include <stdint.h>
#   ifndef WIN32
#       include <stdbool.h>
#   endif
#   include <stdarg.h>

#   define DISPATCH_API_VERSION 20090501

#   ifndef __DISPATCH_INDIRECT__
#   define __DISPATCH_INDIRECT__
#   endif

#   include "base.h"
#   include "object.h"
#   include "time.h"
#   include "queue.h"
/* DISABLED UNTIL CLEAN IMPLEMENTATION IS AVAILABLE
#include "source.h"
   */
#   include "group.h"
#   include "semaphore.h"
#   include "once.h"

#   undef __DISPATCH_INDIRECT__

#endif // ELSE _BLOCKS_

#endif /* XDISPATCH_H_ */
