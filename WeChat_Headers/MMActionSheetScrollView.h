//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, UIView;
@protocol MMActionSheetScrollViewDelegate;

@interface MMActionSheetScrollView : UIScrollView
{
    id <MMActionSheetScrollViewDelegate> _actionSheetDelegate;
    UIView *_customView;
    NSMutableArray *_itemViewArray;
}

@property(retain, nonatomic) NSMutableArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) __weak id <MMActionSheetScrollViewDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)reloadItems:(id)arg1 itemDelegate:(id)arg2;

@end
