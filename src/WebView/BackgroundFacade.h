//
//  BackgroundFacade.h
//  KittCore
//
//  Created by Katie on 8/14/20.
//

@class BirdgeSwitchboard;

@class BrowserExtension;

@protocol BackgroundFacade <WebViewFacade>

@property (nullable, weak) BridgeSwitchboard *bridgeSwitchboard;

@property (nullable, weak) BrowserExtension *extension;

-(void)loadExtensionBundleScript;

@end
