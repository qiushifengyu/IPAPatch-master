//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FavAudioInfo : NSObject
{
    unsigned int m_uiAudioFormat;
    unsigned int m_uiAudioID;
    unsigned int m_uiAudioDuration;
    NSString *m_nsAudioID;
    NSString *m_nsAudioPath;
    _Bool m_bEnable;
    _Bool m_bForceSpeeker;
}

@property(nonatomic) _Bool m_bForceSpeeker; // @synthesize m_bForceSpeeker;
@property(nonatomic) _Bool m_bEnable; // @synthesize m_bEnable;
@property(retain, nonatomic) NSString *m_nsAudioPath; // @synthesize m_nsAudioPath;
@property(retain, nonatomic) NSString *m_nsAudioID; // @synthesize m_nsAudioID;
@property(nonatomic) unsigned int m_uiAudioDuration; // @synthesize m_uiAudioDuration;
@property(nonatomic) unsigned int m_uiAudioFormat; // @synthesize m_uiAudioFormat;
@property(nonatomic) unsigned int m_uiAudioID; // @synthesize m_uiAudioID;
- (void).cxx_destruct;

@end
