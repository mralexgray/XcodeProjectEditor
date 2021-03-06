//
//  PBXTargetDependency.m
//  XcodeProjectEditor
//
//  Created by Daniel DeCovnick on 4/6/10.
//  Copyright 2010 Softyards Software. All rights reserved.
//

#import "PBXTargetDependency.h"
#import "PBXContainerItemProxy.h"
#import "SYPBXProjArchiver.h"

@implementation PBXTargetDependency
@synthesize name;
-(void)dealloc
{
	SYRelease(name);
	SYRelease(targetProxy);
	SYRelease(target);
	[super dealloc];
}
-(PBXContainerItemProxy *)targetProxy
{
	return [self.archiver.objectsByArchiveIDs objectForKey:targetProxy];
}
-(void)setTargetProxy:(NSString *)tp
{
	[tp retain];
	[targetProxy release];
	targetProxy = tp;
}
-(PBXNativeTarget *)target
{
	return [self.archiver.objectsByArchiveIDs objectForKey:target];
}
-(void)setTarget:(NSString *)t
{
	[t retain];
	[target release];
	target = t;
}

-(NSDictionary *)attrs
{
	NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithObjectsAndKeys:name, @"name", targetProxy, @"targetProxy", nil];
	[dict addEntriesFromDictionary:[super attrs]];
	return dict;
}
@end
