//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView : MMUIView
{
    int m_pulldownHeight;
    int _state;
    id <EGORefreshTableHeaderDelegate> delegate;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (id)initWithFrame:(struct CGRect)arg1;

@end

