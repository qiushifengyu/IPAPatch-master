//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class BottleAnimation, BottleTipView, UIView;
@protocol CanvasManagerDelegate><NSObject;

@interface BaseBottleView : MMUIView
{
    _Bool mIsShow;
    UIView *mCanvasView;
    id <CanvasManagerDelegate><NSObject> delegate;
    BottleTipView *mBottleTipView;
    BottleAnimation *mBottleAnimation;
}

@property(retain, nonatomic) BottleAnimation *mBottleAnimation; // @synthesize mBottleAnimation;
@property(retain, nonatomic) BottleTipView *mBottleTipView; // @synthesize mBottleTipView;
@property(nonatomic) __weak id <CanvasManagerDelegate><NSObject> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIView *mCanvasView; // @synthesize mCanvasView;
- (void).cxx_destruct;
- (_Bool)isAnimationFinish;
- (void)doBrandUserAnimation;
- (void)doFishTextAnimation;
- (void)doFishAudioAnimation;
- (void)doFishFailAnimation;
- (void)doFishingAnimation;
- (void)doThrowTextAnimation;
- (void)doThrowAudioAnimation;
- (void)doSuckTextAnimation;
- (void)doSuckAudioAnimation;
- (void)hideAllAnimationView;
- (void)resetAnimationStatus;
- (void)showTipViewWithLeftButtonTitle:(id)arg1 andRightButtonTitle:(id)arg2 andMessage:(id)arg3;
- (void)showTipViewWithButtonTitle:(id)arg1 andMessage:(id)arg2;
- (void)showWarningTipViewNoConfirm:(id)arg1;
- (void)showWarningTipViewNoHide:(id)arg1;
- (void)showWarningTipView:(id)arg1;
- (id)NavigationController;
- (void)enableTouch;
- (void)disableTouch;
- (void)unSpotLightCanvasAnimated:(_Bool)arg1;
- (void)spotLightCanvasAnimated:(_Bool)arg1;
- (void)unDarkenCanvasAnimated:(_Bool)arg1;
- (void)darkenCanvasAnimated:(_Bool)arg1;
- (void)showCanvasBottomBar;
- (void)hideCanvasBottomBar;
- (void)showCanvasTopBar;
- (void)hideCanvasTopBar;
- (_Bool)isShow;
- (void)hideOnCanvas;
- (void)removeFromCanvas;
- (void)drawOnCanvas;
- (void)clearCanvas;
- (void)dealloc;
- (void)setBottleAnimationDelegate:(id)arg1;
- (void)setBottleAnimation:(id)arg1;
- (void)setBottleTipViewDelegate:(id)arg1;
- (void)setBottleTipView:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithCanvas:(id)arg1;
- (id)init;
- (_Bool)animationHasSetting;
- (_Bool)tipViewHasSetting;
- (_Bool)canvasHasSetting;

@end

