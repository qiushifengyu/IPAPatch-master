//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface MMSessionSetting : NSObject <NSCoding>
{
    long long m_sessionImportTime;
    unsigned int m_sessionVersion;
    unsigned int m_sessionFailCount;
}

@property unsigned int m_sessionVersion; // @synthesize m_sessionVersion;
@property unsigned int m_sessionFailCount; // @synthesize m_sessionFailCount;
@property long long m_sessionImportTime; // @synthesize m_sessionImportTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
