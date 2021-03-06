//
//  PBXTargetDependency.h
//  XcodeProjectEditor
//
//  Created by Daniel DeCovnick on 4/6/10.
//  Copyright 2010 Softyards Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "XcodeObject.h"

@class PBXContainerItemProxy, PBXNativeTarget;

@interface PBXTargetDependency : XcodeObject {
	NSString *name;
	NSString *targetProxy;
	NSString *target;
}
@property(retain) NSString *name;
-(PBXContainerItemProxy *)targetProxy;
-(void)setTargetProxy:(NSString *)tp;
-(PBXNativeTarget *)target;
-(void)setTarget:(NSString *)t;
@end
