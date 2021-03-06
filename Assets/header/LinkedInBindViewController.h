//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTableViewInfo, NSDictionary, NSString;

@interface LinkedInBindViewController : MMUIViewController <PBMessageObserverDelegate, MMWebViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    int m_uiScene;
    NSDictionary *m_dicParams;
    _Bool m_bSwitch;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initQRCodeResultView;
- (void)initUnbindView;
- (void)initBindedView:(id)arg1;
- (void)initHeaderView:(id)arg1 Margin:(double)arg2;
- (void)onShowLinkedInSwitchQRcode:(id)arg1;
- (void)onShowLinkedInSwitch:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)onQRCodeBind;
- (void)onUnBind;
- (void)doUnBind;
- (void)onBind;
- (void)onWebViewWillClose:(id)arg1;
- (id)getDicLinkedInUrl;
- (id)getDicLinkedInName;
- (id)getDicLinkedInID;
- (id)getSelfLinkedInUrl;
- (id)getSelfLinkedInName;
- (id)getSelfLinkedInID;
- (void)dealloc;
- (id)init;
- (void)setFromScene:(int)arg1;
- (void)setParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

