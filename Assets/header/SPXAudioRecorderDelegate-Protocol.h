//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AudioRecorderUserData;

@protocol SPXAudioRecorderDelegate

@optional
- (void)OnSPXPart:(AudioRecorderUserData *)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnSPXEndRecording:(AudioRecorderUserData *)arg1;
- (void)OnSPXBeginRecording:(AudioRecorderUserData *)arg1 ErrNo:(int)arg2;
- (void)OnSPXLevelMeter:(AudioRecorderUserData *)arg1 Peak:(float)arg2;
- (_Bool)OnPrepareSendSPX:(AudioRecorderUserData *)arg1;
@end
