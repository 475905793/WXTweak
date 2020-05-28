//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLocationSearchBar, NSString, UISearchBar;

@protocol MMLocationSearchBarDelegate <NSObject>

@optional
- (void)cancelSearch;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarBecomeActive;
- (void)mmSearchBarDidEnd;
- (_Bool)mmSearchBarShouldBeginEditing:(MMLocationSearchBar *)arg1;
- (void)mmSearchBarTextDidChange:(NSString *)arg1;
- (_Bool)mmSearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(NSString *)arg2;
- (void)mmSearchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)mmSearchBarCancelButtonClicked:(MMLocationSearchBar *)arg1;
- (void)mmSearchBarSearchButtonClicked:(MMLocationSearchBar *)arg1;
@end

