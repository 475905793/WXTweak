//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageTransformFilter : GPUImageFilter
{
    int transformMatrixUniform;
    int orthographicMatrixUniform;
    struct GPUMatrix4x4 orthographicMatrix;
    _Bool _ignoreAspectRatio;
    _Bool _anchorTopLeft;
    struct CGAffineTransform affineTransform;
    struct CATransform3D _transform3D;
}

@property(nonatomic) _Bool anchorTopLeft; // @synthesize anchorTopLeft=_anchorTopLeft;
@property(nonatomic) _Bool ignoreAspectRatio; // @synthesize ignoreAspectRatio=_ignoreAspectRatio;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
@property(nonatomic) struct CGAffineTransform affineTransform; // @synthesize affineTransform;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)convert3DTransform:(struct CATransform3D *)arg1 toMatrix:(struct GPUMatrix4x4 *)arg2;
- (void)loadOrthoMatrix:(float *)arg1 left:(float)arg2 right:(float)arg3 bottom:(float)arg4 top:(float)arg5 near:(float)arg6 far:(float)arg7;
- (id)init;

@end

