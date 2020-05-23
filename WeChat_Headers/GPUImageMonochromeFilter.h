//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageMonochromeFilter : GPUImageFilter
{
    int intensityUniform;
    int filterColorUniform;
    double _intensity;
    struct GPUVector4 _color;
}

@property(nonatomic) struct GPUVector4 color; // @synthesize color=_color;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void)setColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)init;

@end

