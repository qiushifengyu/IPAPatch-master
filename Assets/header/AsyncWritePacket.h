//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AsyncWritePacket : NSObject
{
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end
