//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface FTSBussinessActionInfo : MMObject
{
    unsigned int _actionType;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)init;

@end
