//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CityUpdaterDelegate.h"
#import "SBFProceduralWallpaper.h"

@class City, NSString, NSTimer, WADynamicWeatherBackground;

@interface WBWallpaper : UIView <SBFProceduralWallpaper, CityUpdaterDelegate>
{
    _Bool _animating;
    int _variant;
    id *_delegate;
    WADynamicWeatherBackground *_view;
    NSTimer *_updateTimer;
    City *_city;
}

+ (id)wallpaperWithSettings:(id)arg1 variant:(int)arg2;
+ (_Bool)colorChangesSignificantly;
+ (id)identifier;
@property(retain, nonatomic) City *city; // @synthesize city=_city;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) WADynamicWeatherBackground *view; // @synthesize view=_view;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property id *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)cityDidFinishWeatherUpdate:(id)arg1;
- (void)cityDidStartWeatherUpdate:(id)arg1;
- (void)scheduleUpdateTimerWithInterval:(float)arg1;
- (void)intervalChanged:(id)arg1;
- (void)scheduleUpdateTimer;
- (id)initWithSettings:(id)arg1 variant:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

