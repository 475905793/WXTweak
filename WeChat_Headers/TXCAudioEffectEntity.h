//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXCAudioEffect, TXCLiveMixPlayer;

@interface TXCAudioEffectEntity : NSObject
{
    int _currentLoop;
    TXCLiveMixPlayer *_effectPlayer;
    TXCAudioEffect *_audioEffect;
    double _volume;
}

@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) int currentLoop; // @synthesize currentLoop=_currentLoop;
@property(retain, nonatomic) TXCAudioEffect *audioEffect; // @synthesize audioEffect=_audioEffect;
@property(retain, nonatomic) TXCLiveMixPlayer *effectPlayer; // @synthesize effectPlayer=_effectPlayer;
- (void).cxx_destruct;
- (id)init;

@end

