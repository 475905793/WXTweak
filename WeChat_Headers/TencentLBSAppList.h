//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TencentLBSAppList : NSObject
{
    NSString *_docPath;
    NSString *_path;
    NSDate *_last;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDate *last; // @synthesize last=_last;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *docPath; // @synthesize docPath=_docPath;
- (void).cxx_destruct;
- (void)postAppList;
- (id)init;

@end

