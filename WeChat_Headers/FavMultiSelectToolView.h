//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBottomBar.h"

@class NSMutableArray;

@interface FavMultiSelectToolView : WCBottomBar
{
    NSMutableArray *m_btnArray;
}

- (void).cxx_destruct;
- (void)setBtnsEnabled:(_Bool)arg1;
- (void)layoutView;
- (id)createBtnWithImg:(id)arg1 accessibilityStr:(id)arg2 Sel:(SEL)arg3 Target:(id)arg4;
- (void)addButtonType:(unsigned long long)arg1 selector:(SEL)arg2 target:(id)arg3;

@end

