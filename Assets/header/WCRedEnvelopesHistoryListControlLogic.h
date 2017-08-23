//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCRedEnvelopesHistoryListControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate>
{
    int m_enWCRedEnvelopesHistoryType;
}

- (void)OnChangeToScene:(int)arg1;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnDidSelectOtherYear:(id)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
- (void)requestData;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
