//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface LazyExtensionAgent : MMService <MMService>
{
    NSMutableDictionary *m_dicExtensions;
    NSMutableDictionary *m_dicKeyExtensions;
}

- (void).cxx_destruct;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 forKey:(id)arg3;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2 forKey:(id)arg3;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2;
- (void)addListener:(Class)arg1 toDic:(id)arg2 forMethods:(struct objc_method_description *)arg3 methodCount:(unsigned int)arg4;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
