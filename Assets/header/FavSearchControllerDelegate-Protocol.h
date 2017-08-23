//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavDataItemWrap, FavoritesItem, MMUIViewController, NSIndexPath, UITableView, UIView;

@protocol FavSearchControllerDelegate <NSObject>
- (void)resetHeaderView:(UIView *)arg1;
- (_Bool)shouldShowSearchResult:(FavoritesItem *)arg1;
- (void)onSelectFavItem:(FavoritesItem *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)onBtnEdit;
- (void)onWillBeginSearch;
- (void)onSelectFavDataItem:(FavDataItemWrap *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
