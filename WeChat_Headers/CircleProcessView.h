//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIColor, UIImageView;

@interface CircleProcessView : MMUIView
{
    double width;
    double height;
    UIImageView *_bgImage;
    double _value;
    UIColor *_progressTintColor;
}

@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

