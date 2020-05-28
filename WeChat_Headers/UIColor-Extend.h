//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (Extend)
+ (void)vsb_fixRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromVisualBrightness:(double)arg4;
+ (id)vsb_darkModeColorFromLightModeColor:(id)arg1 bgColor:(id)arg2;
+ (id)vsb_dynamicColorFromLightModeColor:(id)arg1 bgColor:(id)arg2;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
+ (id)darkModeColorFromLightModeColor:(id)arg1;
+ (id)dynamicColorFromLightModeColor:(id)arg1;
+ (double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorInLightMode:(id)arg1 DarkMode:(id)arg2;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)dynamicColorWithDictionary:(id)arg1 alpha:(double)arg2;
+ (id)dynamicColorWithDictionary:(id)arg1;
+ (unsigned int)rte_hexValueToUnsigned:(id)arg1;
+ (id)rte_hexStringTransformFromThreeCharacters:(id)arg1;
+ (id)rte_colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3 alpha:(double)arg4;
+ (id)rte_colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)rte_hexColor:(id)arg1 alpha:(double)arg2;
+ (id)rte_hexColor:(id)arg1;
+ (id)QMapColorWithHex:(id)arg1;
- (double)vsb_visualBrightness;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)getUpperColorByFinalColor:(id)arg1;
- (id)privateColorByOverlappingColor:(id)arg1;
- (id)colorByOverlappingColor:(id)arg1;
- (_Bool)isDarkColor;
- (id)getAttachedDarkModeColor;
- (void)attachDarkModeColor:(id)arg1;
- (id)colorDescription;
- (_Bool)isDynamicColor;
- (id)colorInDarkMode;
- (id)colorInLightMode;
- (_Bool)rte_isEqualToColor:(id)arg1;
@end

