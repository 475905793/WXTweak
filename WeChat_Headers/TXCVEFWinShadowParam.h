//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoEffectsParam.h"

@interface TXCVEFWinShadowParam : TXCVideoEffectsParam
{
    int _mode;
    double _alpha;
    double _offset;
    double _width;
    double _stride;
}

@property(nonatomic) double stride; // @synthesize stride=_stride;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (id)init;

@end

