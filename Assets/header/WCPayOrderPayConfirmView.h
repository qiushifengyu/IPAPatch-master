//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class ABTestItem, NSString, UIButton, UIImageView, WCPayControlData, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOrderPayConfirmViewDelegate;

@interface WCPayOrderPayConfirmView : MMUIView <CAAnimationDelegate, WCBaseInfoItemDelegate>
{
    UIImageView *m_backgroundView;
    UIButton *m_payButton;
    NSString *m_nsContent;
    NSString *m_nsConfirmButtonName;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    id <WCPayOrderPayConfirmViewDelegate> m_delegate;
    WCPayControlData *_data;
    _Bool _isTouchID;
    ABTestItem *_payABTestItem;
}

@property(retain, nonatomic) ABTestItem *payABTestItem; // @synthesize payABTestItem=_payABTestItem;
- (void).cxx_destruct;
- (float)getBottomMarginBtn;
- (float)getBottomMarginCardInfo;
- (float)getBottomMarginFav;
- (float)getBottomMarginMoney;
- (float)getBottomMarginDesc;
- (float)getBottomMarginLine;
- (float)getBottomMarginContent;
- (id)getTransactionId;
- (id)getHighlightImg:(struct CGRect)arg1;
- (_Bool)isThouchIDAuthEnabelForCurrentOrder:(id)arg1;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnSelectTradeFavInfo;
- (void)OnSelectOtherCard;
- (void)onTouchIDBtnClick;
- (_Bool)accessibilityPerformEscape;
- (void)onCancelBtnClick;
- (void)onPayBtnClick;
- (void)onIOS8_3BtnClick;
- (void)closeView;
- (void)setConfirmButtonName:(id)arg1;
- (void)setContent:(id)arg1;
- (void)endAnimation;
- (void)showAnimation;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4;
- (void)layoutSubviews;
- (id)changeCardViewWithWidth:(double)arg1 height:(double)arg2;
- (id)bankLogoOfSelectedCard;
- (void)onDoTouchIDAuth;
- (void)onSwitchToPwdAuth;
- (id)getFavViewWithFeeType:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3 scene:(int)arg4 touchID:(_Bool)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

