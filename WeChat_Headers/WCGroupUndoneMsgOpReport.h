//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCGroupUndoneBaseReport.h"

@interface WCGroupUndoneMsgOpReport : WCGroupUndoneBaseReport
{
    unsigned int _exitType;
    unsigned int _actionType;
}

@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned int exitType; // @synthesize exitType=_exitType;
- (void)report;

@end
