//
//  RCTSpotifyAuthController.h
//  RCTSpotify
//
//  Created by Luis Finke on 11/5/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <WebKit/WebKit.h>
#import <SpotifyAuthentication/SpotifyAuthentication.h>

typedef void(^RCTSpotifyAuthCallback)(BOOL authenticated, NSError* error);

@interface RCTSpotifyAuthController : UINavigationController

-(id)initWithAuth:(SPTAuth*)auth;
-(id)initWithAuth:(SPTAuth*)auth options:(NSDictionary*)options;

-(void)clearCookies:(void(^)())completion;

+(UIViewController*)topViewController;

@property (strong) RCTSpotifyAuthCallback completion;

@end
