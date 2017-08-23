//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class LocationRetriever, NSMutableDictionary, NSString;

@interface WAAppMgr : MMService <PBMessageObserverDelegate, LocationRetrieveDelegate, IMMLanguageMgrExt, MMService>
{
    _Bool _retrivingLocation;
    unsigned int _lifeSpan;
    unsigned int _lastUpdate;
    LocationRetriever *_locationRetriever;
    CDUnknownBlockType _onNearWeAppListCallback;
    NSMutableDictionary *_nearInfo;
}

@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) unsigned int lifeSpan; // @synthesize lifeSpan=_lifeSpan;
@property(retain, nonatomic) NSMutableDictionary *nearInfo; // @synthesize nearInfo=_nearInfo;
@property(copy, nonatomic) CDUnknownBlockType onNearWeAppListCallback; // @synthesize onNearWeAppListCallback=_onNearWeAppListCallback;
@property(nonatomic) _Bool retrivingLocation; // @synthesize retrivingLocation=_retrivingLocation;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
- (void).cxx_destruct;
- (void)updateSearchPlaceHolder;
- (void)onLanguageChange;
- (void)getNearWeAppLink:(CDUnknownBlockType)arg1;
- (void)setNearData:(id)arg1 searchId:(id)arg2 nearCount:(long long)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportWeAppLocation:(struct CLLocationCoordinate2D)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)updateNearWeApp;
- (void)openAppWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 showConfig:(id)arg5;
- (void)openAppWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4;
- (void)openAppWithContact:(id)arg1 navigationController:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
