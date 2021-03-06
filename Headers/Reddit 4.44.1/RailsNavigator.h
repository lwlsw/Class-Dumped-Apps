//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface RailsNavigator : NSObject
{
    UIViewController *_vc;
}

+ (id)searchViewControllerWithDeepLinkURL:(id)arg1 error:(id *)arg2;
+ (id)searchViewControllerWithObjects:(id)arg1 attemptAutopill:(_Bool)arg2 analyticsContext:(id)arg3;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)navigateToSearchViewControllerWithRailsContext:(id)arg1 object:(id)arg2;
- (void)navigateToSearchViewControllerWithRailsContextSeeMoreTopFlairs:(id)arg1 model:(id)arg2;
- (void)navigateToSearchViewControllerWithRailsContextSeeMoreSubreddits:(id)arg1;
- (void)navigateToSearchViewControllerWithAnalyticsContext:(id)arg1 contextObjects:(id)arg2 showMode:(unsigned long long)arg3 transitionClass:(Class)arg4 queryOrigin:(unsigned long long)arg5 autoPill:(_Bool)arg6;
- (void)navigateToSearchViewControllerWithPill:(id)arg1 subreddit:(id)arg2 transitionClass:(Class)arg3 analyticsContext:(id)arg4;
- (void)navigateToSearchViewControllerWithRailsContext:(id)arg1 withListingNetworkSource:(id)arg2 withPlaceholder:(id)arg3;
- (void)navigateToSearchViewControllerWithRailsContext:(id)arg1 withContextObjects:(id)arg2 withPlaceholder:(id)arg3 showMode:(unsigned long long)arg4 transitionClass:(Class)arg5 initialTabType:(unsigned long long)arg6;
- (void)navigateToSearchViewControllerWithRailsContext:(id)arg1 withPlaceholder:(id)arg2 showMode:(unsigned long long)arg3 transitionClass:(Class)arg4;
- (void)navigateToSearchViewControllerWithRailsContext:(id)arg1 withPlaceholder:(id)arg2;
- (id)initWithViewController:(id)arg1;

@end

