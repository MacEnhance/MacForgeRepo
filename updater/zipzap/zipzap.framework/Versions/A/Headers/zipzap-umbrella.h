#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ZipZap.h"
#import "ZZArchive.h"
#import "ZZArchiveEntry.h"
#import "ZZConstants.h"
#import "ZZError.h"

FOUNDATION_EXPORT double zipzapVersionNumber;
FOUNDATION_EXPORT const unsigned char zipzapVersionString[];

