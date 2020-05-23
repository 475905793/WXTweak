//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, UIImage;

@interface WCTimeLineAdFullOutstandingView : MMUIView
{
    long long _spriteType;
    double _duration;
    UIImage *_spriteImage;
    NSMutableArray *_spriteImages;
    struct CGRect _pressViewFrame;
}

@property(nonatomic) struct CGRect pressViewFrame; // @synthesize pressViewFrame=_pressViewFrame;
@property(retain, nonatomic) NSMutableArray *spriteImages; // @synthesize spriteImages=_spriteImages;
@property(retain, nonatomic) UIImage *spriteImage; // @synthesize spriteImage=_spriteImage;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long spriteType; // @synthesize spriteType=_spriteType;
- (void).cxx_destruct;
- (void)generateRandomCenterForView:(id)arg1;
- (void)beginSpriteAnimationForSpin;
- (void)beginSpriteAnimationForMoving:(_Bool)arg1;
- (void)beginSpriteAnimation;
- (int)generateSpriteImagesForMoving:(_Bool)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 minWidth:(unsigned int)arg4 maxWidth:(unsigned int)arg5;
- (void)generateSpriteImagesForSpin;
- (void)generateSpriteImagesForMoving;
- (void)generateSpriteImages;
- (id)initWithFrame:(struct CGRect)arg1 spriteType:(long long)arg2 duration:(double)arg3;

@end

