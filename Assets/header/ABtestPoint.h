//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABtestCase, NSString;

@interface ABtestPoint : NSObject
{
    ABtestCase *testCase;
    unsigned long long pointID;
    unsigned long long pointStatus;
    unsigned long long reportID;
    NSString *value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value;
@property(nonatomic) unsigned long long reportID; // @synthesize reportID;
@property(nonatomic) unsigned long long pointStatus; // @synthesize pointStatus;
@property(nonatomic) unsigned long long pointID; // @synthesize pointID;
@property(retain, nonatomic) ABtestCase *testCase; // @synthesize testCase;
- (void).cxx_destruct;
- (id)init;

@end
