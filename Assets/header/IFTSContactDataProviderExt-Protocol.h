//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, NSDictionary;

@protocol IFTSContactDataProviderExt

@optional
- (void)onTagNamesReload:(NSDictionary *)arg1;
- (void)onContactDeleted:(CContact *)arg1;
- (void)onContactReplaced:(CContact *)arg1;
- (void)onAddressBookReload;
- (void)onContactReload;
@end
