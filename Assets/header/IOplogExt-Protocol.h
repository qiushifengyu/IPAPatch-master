//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class OplogErrMsg, ProtobufCGIWrap;

@protocol IOplogExt <NSObject>
- (void)oplogRet:(int)arg1 errMsg:(OplogErrMsg *)arg2 eventID:(unsigned int)arg3 cgiWrap:(ProtobufCGIWrap *)arg4;
@end
