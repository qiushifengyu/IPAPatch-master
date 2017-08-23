//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NotMainQueueTimerDelegate, OS_dispatch_source;

@interface NotMainQueueTimer : NSObject
{
    NSObject<OS_dispatch_source> *m_timerSource;
    id <NotMainQueueTimerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <NotMainQueueTimerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *m_timerSource; // @synthesize m_timerSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithDelegate:(id)arg1 interval:(float)arg2 delay:(float)arg3;

@end
