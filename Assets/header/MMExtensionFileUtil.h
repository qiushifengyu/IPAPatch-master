//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionFileUtil : NSObject
{
}

+ (void)clearAllExtIdKeyReportFiles;
+ (id)getAllExtIdKeyReportFiles;
+ (void)clearAllExtFavFileTaskFiles;
+ (void)clearAllExtFavVideoTaskFiles;
+ (void)clearAllExtFavUrlTaskFiles;
+ (void)clearAllExtFavImgTaskFiles;
+ (id)getAllExtFavFileTaskFiles;
+ (id)getAllExtFavVideoTaskFiles;
+ (id)getAllExtFavUrlTaskFiles;
+ (id)getAllExtFavImgTaskFiles;
+ (_Bool)addMessageFailPostSessionDataToFile:(id)arg1 WithSessionID:(id)arg2 withTaskID:(unsigned long long)arg3;
+ (_Bool)removeMessagePostTaskIdDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getMessagePostTaskIdDataFailePathWithSessionID:(id)arg1 andTaskID:(id)arg2;
+ (id)getAllMessageFailSessionFile;
+ (_Bool)removeMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (id)getMessagePostMetaDataFilePathWithClientID:(id)arg1;
+ (_Bool)removeTimelineUploadTaskFileWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
+ (id)getWCUploadTaskWithTaskFilePath:(id)arg1;
+ (id)getAllExtWCUploadFailTaskFiles;
+ (id)getExtWCUploadTaskWithSessionID:(id)arg1 andTaskID:(unsigned long long)arg2;
+ (_Bool)clearPostCacheWithSessionID:(id)arg1;

@end
