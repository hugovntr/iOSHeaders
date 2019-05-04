<template>
  <div id="app">
	<div id="nav" class="container-fluid`">
	  <router-link to="/">Home</router-link> |
	  <router-link to="/about">About</router-link>
	  <Versions/>
	</div>
	<router-view/>
  </div>
</template>

<style lang="scss">
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
}
#nav {
  padding: 30px;
  a {
	font-weight: bold;
	color: #2c3e50;
	&.router-link-exact-active {
	  color: #42b983;
	}
  }
}
</style>

<script lang="ts">
import Vue from 'vue'
import Component from 'vue-class-component'
import { Action } from "vuex-class";
import Versions from '@/components/Versions.vue';

@Component({
	components: { Versions }
})
export default class App extends Vue {
	@Action('initStore') initStore:any

	mounted() {
		this.initStore()
	}
}


</script>

