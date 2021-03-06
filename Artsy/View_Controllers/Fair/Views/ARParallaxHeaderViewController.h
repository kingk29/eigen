#import <UIKit/UIKit.h>

#import "ARMacros.h"

@class Fair, Profile;


@interface ARParallaxHeaderViewController : UIViewController

- (instancetype)initWithContainingScrollView:(UIScrollView *)containingScrollView fair:(Fair *)fair profile:(Profile *)profile AR_VC_DESIGNATED_INITIALIZER;

@property (nonatomic, weak, readonly) UIScrollView *containingScrollView;
@property (nonatomic, weak, readonly) Fair *fair;
@property (nonatomic, weak, readonly) Profile *profile;

@end
