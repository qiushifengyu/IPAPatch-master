//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface NavigateMap : MMObject
{
    int _mapType;
    NSString *_mapName;
    NSString *_viewUrl;
    NSString *_navigateUrl;
    NSString *_installUrl;
}

@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) NSString *navigateUrl; // @synthesize navigateUrl=_navigateUrl;
@property(retain, nonatomic) NSString *viewUrl; // @synthesize viewUrl=_viewUrl;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (void)dealloc;

@end

