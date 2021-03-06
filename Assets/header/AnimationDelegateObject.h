//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString;
@protocol AnimationDelegateObjectDelegate;

@interface AnimationDelegateObject : MMObject <CAAnimationDelegate>
{
    id <AnimationDelegateObjectDelegate> m_delegate;
}

@property(nonatomic) __weak id <AnimationDelegateObjectDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

