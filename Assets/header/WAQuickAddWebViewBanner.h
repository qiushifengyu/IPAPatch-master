//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseWebViewBanener.h"

@class MMWebImageView, NSString, UIButton, UILabel;
@protocol WAQuickAddWebViewBannerDelegate;

@interface WAQuickAddWebViewBanner : WABaseWebViewBanener
{
    MMWebImageView *m_logoView;
    UILabel *m_tipLabel;
    UIButton *m_addButton;
    id <WAQuickAddWebViewBannerDelegate> _delegate;
    NSString *_userName;
}

@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <WAQuickAddWebViewBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAdd;
- (void)layoutSubviews;
- (void)initAddButton;
- (void)initTipLabel;
- (void)initLogoView;
- (id)init;

@end

