//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MMUIViewController, UIScrollView;

@protocol WCGeneralListMonitorMgrExt

@optional
- (void)onScrollViewDidScroll:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onViewDidDisappear:(_Bool)arg1;
- (void)onViewDidAppear:(_Bool)arg1 withVC:(MMUIViewController *)arg2;
- (void)onReloadDataWrap;
- (void)onViewWillBePoped:(_Bool)arg1;
- (void)onViewWillBePushed:(_Bool)arg1;
@end
