//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPackageUnpackLib : NSObject
{
    struct WXAPkg *_unpackLib;
    NSString *_appId;
    unsigned long long _debugModeType;
    unsigned long long _version;
}

@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) struct WXAPkg *unpackLib; // @synthesize unpackLib=_unpackLib;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getFileContent:(id)arg1 error:(id *)arg2;
- (id)initWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;

@end

