#import "CPTAnimation.h"
#import "CPTDefinitions.h"

@class CPTAnimationPeriod;

@interface CPTAnimationOperation : NSObject {
    @private
    CPTAnimationPeriod *period;
    CPTAnimationCurve animationCurve;

    id boundObject;
    SEL boundGetter;
    SEL boundSetter;

    __cpt_weak NSObject<CPTAnimationDelegate> *delegate;
}

/// @name Animation Timing
/// @{
@property (nonatomic, retain) CPTAnimationPeriod *period;
@property (nonatomic, assign) CPTAnimationCurve animationCurve;
/// @}

/// @name Animated Property
/// @{
@property (nonatomic, retain) id boundObject;
@property (nonatomic) SEL boundGetter;
@property (nonatomic) SEL boundSetter;
/// @}

/// @name Delegate
/// @{
@property (nonatomic, cpt_weak_property) __cpt_weak NSObject<CPTAnimationDelegate> *delegate;
/// @}

@end
